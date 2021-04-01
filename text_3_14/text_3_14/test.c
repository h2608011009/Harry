#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <errno.h>

//typedef struct
//{
//
//	int a;
//	int b;
//	int c;
//}S;
//
//int main()
//{
//	S s[3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	printf("%d,%d,%d", s[1].a, s[2].b);
//	return 0;
//}

//int main()
//{
//
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//
//
//	return 0;
//}


int main()
{
	FILE *pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}

	fclose(pf);
	pf = NULL;

	return 0;
}