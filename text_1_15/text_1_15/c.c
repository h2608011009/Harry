#define _CRT_SECURE_NO_WARNING 1
#include <stdio.h>

//int main()
//{
//		double d = 3.134;
//		double* pd = &d;
//		printf("%lf,%d,%f",d,pd,pd);
//		return 0;
//
//}

//int main()
//{
//	int i = 1, p;
//	while (i < 100)
//	{
//		p = i % 2;
//		if (p == 1)
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

int main()
{
	char ch = getchar();
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}