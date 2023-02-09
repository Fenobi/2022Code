#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <windows.h>
#include <time.h>

using namespace std;

// 定义地图的大小
const int WIDTH = 20;
const int HEIGHT = 20;

// 定义上下左右四个方向
const int UP = 0;
const int DOWN = 1;
const int LEFT = 2;
const int RIGHT = 3;

// 定义蛇的每一节
struct SnakeNode {
    int x;
    int y;
};

// 定义贪吃蛇的类
class Snake {
private:
    vector<SnakeNode> body; // 蛇的身体
    int direction; // 蛇头的方向
    int food_x; // 食物的 x 坐标
    int food_y; // 食物的 y 坐标

public:
    Snake() {
        // 初始化蛇的身体，蛇的身体有三节
        body.push_back({ WIDTH / 2, HEIGHT / 2 });
        body.push_back({ WIDTH / 2, HEIGHT / 2 + 1 });
        body.push_back({ WIDTH / 2, HEIGHT / 2 + 2 });

        // 初始化蛇头的方向为向右
        direction = RIGHT;

        // 随机生成食物的坐标
        srand(time(0));
        food_x = rand() % WIDTH;
        food_y = rand() % HEIGHT;
    }

    // 更新蛇的位置
    void update() {
        // 定义下一个蛇节的坐标
        int next_x = body[0].x;
        int next_y = body[0].y;

        // 根据方向更新下一个蛇节的坐标
        if (direction == UP) {
            next_y--;
        }
        else if (direction == DOWN) {
            next_y++;
        }
        else if (direction == LEFT) {
            next_x--;
        }
        else if (direction == RIGHT) {
            next_x++;
        }

        // 如果下一个蛇节超出地图的范围，则蛇死亡
        if (next_x < 0 || next_x >= WIDTH || next_y < 0 || next_y >= HEIGHT) {
            cout << "Game Over" << endl;
            exit(0);
        }

        // 如果下一个蛇节的坐标和食物的坐标相同，则吃掉食物
        if (next_x == food_x && next_y == food_y) {
            // 在蛇头的位置插入新的蛇节
            body.insert(body.begin(), { next_x, next_y });

            // 随机生成新的食物的坐标
            food_x = rand() % WIDTH;
            food_y = rand() % HEIGHT;
        }
        else {
            // 否则，更新蛇的位置
            for (int i = body.size() - 1; i > 0; i--) {
                body[i].x = body[i - 1].x;
                body[i].y = body[i - 1].y;
            }

            // 更新蛇头的位置
            body[0].x = next_x;
            body[0].y = next_y;
        }
    }

    // 设置蛇头的方向
    void setDirection(int direction) {
        this->direction = direction;
    }

    // 检查蛇是否死亡
    bool isDead() {
        // 如果蛇头的下一个位置和蛇身体的任意一节重合，则蛇死亡
        int next_x = body[0].x;
        int next_y = body[0].y;

        if (direction == UP) {
            next_y--;
        }
        else if (direction == DOWN) {
            next_y++;
        }
        else if (direction == LEFT) {
            next_x--;
        }
        else if (direction == RIGHT) {
            next_x++;
        }

        for (int i = 1; i < body.size(); i++) {
            if (next_x == body[i].x && next_y == body[i].y) {
                return true;
            }
        }

        return false;
    }

    // 绘制游戏画面
    void draw() {
        // 清空屏幕
        system("clear");

            // 绘制地图
            for (int i = 0; i < WIDTH + 2; i++) {
                cout << "#";
            }
        cout << endl;

            for (int i = 0; i < HEIGHT; i++) {
                cout << "#";
                    for (int j = 0; j < WIDTH; j++) {
                        bool is_body = false;
                            bool is_food = false;

                        // 检查当前位置是否有蛇身体
                        for (int k = 0; k < body.size(); k++) {
                            if (body[k].x == j && body[k].y == i) {
                                is_body = true;
                                break;
                            }
                        }

                        // 检查当前位置是否有食物
                        if (food_x == j && food_y == i) {
                            is_food = true;
                        }

                        if (is_body) {
                            cout << "*";
                        }
                        else if (is_food) {
                            cout << "X";
                        }
                        else {
                            cout << " ";
                        }
                    }
                cout << "#" << endl;
            }

        for (int i = 0; i < WIDTH + 2; i++) {
            cout << "#";
        }
        cout << endl;
    }
};

int main() {
    Snake snake;

    while (true) {
        // 绘制游戏画面
        snake.draw();

        // 检查是否死亡
        if (snake.isDead()) {
            cout << "Game Over" << endl;
            exit(0);
        }

        // 获取用户输入
        char input;
        cin >> input;

        if (input == 'w') {
            snake.setDirection(UP);
        }
        else if (input == 's') {
            snake.setDirection(DOWN);
        }
        else if (input == 'a') {
            snake.setDirection(LEFT);
        }
        else if (input == 'd') {
            snake.setDirection(RIGHT);
        }

        // 更新游戏状态
        snake.update();

        // 休眠 100 毫秒
        Sleep(100);
    }

    return 0;
}
