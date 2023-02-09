#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* pf = fopen("fu.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	int ch = fgetc(pf);
	printf("%c\n", ch);
	fseek(pf, -2, SEEK_END);
	ch = fgetc(pf);
	printf("%c\n", ch);
	ch = fgetc(pf);
	printf("%c\n", ch);
	ch = ftell(pf);
	printf("%d\n", ch);
	rewind(pf);
	ch = fgetc(pf);
	printf("%c\n", ch);

	fclose(pf);
	pf = NULL;
	return 0;
}
