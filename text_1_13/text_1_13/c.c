
#define _CRT_SECURE_NO_WARNING 1
#include <stdio.h>

int main()
{
	int i = 0, p = 0;
		 
	while (i < 10)
	{
		i++;
	}

	do
	{
		p++;
	} while (p < -1);
		printf("%d,%d", i, p);
	return 0;
}