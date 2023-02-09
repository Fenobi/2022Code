#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <windows.h>
#include <time.h>

using namespace std;

// �����ͼ�Ĵ�С
const int WIDTH = 20;
const int HEIGHT = 20;

// �������������ĸ�����
const int UP = 0;
const int DOWN = 1;
const int LEFT = 2;
const int RIGHT = 3;

// �����ߵ�ÿһ��
struct SnakeNode {
    int x;
    int y;
};

// ����̰���ߵ���
class Snake {
private:
    vector<SnakeNode> body; // �ߵ�����
    int direction; // ��ͷ�ķ���
    int food_x; // ʳ��� x ����
    int food_y; // ʳ��� y ����

public:
    Snake() {
        // ��ʼ���ߵ����壬�ߵ�����������
        body.push_back({ WIDTH / 2, HEIGHT / 2 });
        body.push_back({ WIDTH / 2, HEIGHT / 2 + 1 });
        body.push_back({ WIDTH / 2, HEIGHT / 2 + 2 });

        // ��ʼ����ͷ�ķ���Ϊ����
        direction = RIGHT;

        // �������ʳ�������
        srand(time(0));
        food_x = rand() % WIDTH;
        food_y = rand() % HEIGHT;
    }

    // �����ߵ�λ��
    void update() {
        // ������һ���߽ڵ�����
        int next_x = body[0].x;
        int next_y = body[0].y;

        // ���ݷ��������һ���߽ڵ�����
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

        // �����һ���߽ڳ�����ͼ�ķ�Χ����������
        if (next_x < 0 || next_x >= WIDTH || next_y < 0 || next_y >= HEIGHT) {
            cout << "Game Over" << endl;
            exit(0);
        }

        // �����һ���߽ڵ������ʳ���������ͬ����Ե�ʳ��
        if (next_x == food_x && next_y == food_y) {
            // ����ͷ��λ�ò����µ��߽�
            body.insert(body.begin(), { next_x, next_y });

            // ��������µ�ʳ�������
            food_x = rand() % WIDTH;
            food_y = rand() % HEIGHT;
        }
        else {
            // ���򣬸����ߵ�λ��
            for (int i = body.size() - 1; i > 0; i--) {
                body[i].x = body[i - 1].x;
                body[i].y = body[i - 1].y;
            }

            // ������ͷ��λ��
            body[0].x = next_x;
            body[0].y = next_y;
        }
    }

    // ������ͷ�ķ���
    void setDirection(int direction) {
        this->direction = direction;
    }

    // ������Ƿ�����
    bool isDead() {
        // �����ͷ����һ��λ�ú������������һ���غϣ���������
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

    // ������Ϸ����
    void draw() {
        // �����Ļ
        system("clear");

            // ���Ƶ�ͼ
            for (int i = 0; i < WIDTH + 2; i++) {
                cout << "#";
            }
        cout << endl;

            for (int i = 0; i < HEIGHT; i++) {
                cout << "#";
                    for (int j = 0; j < WIDTH; j++) {
                        bool is_body = false;
                            bool is_food = false;

                        // ��鵱ǰλ���Ƿ���������
                        for (int k = 0; k < body.size(); k++) {
                            if (body[k].x == j && body[k].y == i) {
                                is_body = true;
                                break;
                            }
                        }

                        // ��鵱ǰλ���Ƿ���ʳ��
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
        // ������Ϸ����
        snake.draw();

        // ����Ƿ�����
        if (snake.isDead()) {
            cout << "Game Over" << endl;
            exit(0);
        }

        // ��ȡ�û�����
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

        // ������Ϸ״̬
        snake.update();

        // ���� 100 ����
        Sleep(100);
    }

    return 0;
}
