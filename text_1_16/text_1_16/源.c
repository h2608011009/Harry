#define _CRT_SECURE_NO_WARNING 1

int main()
{
	int i = 0, n = 0, ret = 1, sum = 0;
	for (n = 1; n <= 10; n++)
	{
		for (i = 1; i <= 0; i++)
		{
			ret = ret*i;
		}
		sum = sum + ret;
		printf("%d", sum);
	}
	return 0;
}