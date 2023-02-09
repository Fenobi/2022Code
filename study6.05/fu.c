#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>

int main()
{
	FILE* pf = fopen("1.txt", "r");
	int a = 120;
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}

	fprintf(pf,"%d", a);
	//fscanf(pf, "%d", &a);
	printf("%d\n", a);
	fclose(pf);
	pf = NULL;
	return 0;
}