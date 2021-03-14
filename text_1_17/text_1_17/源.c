#define _CRT_SECURE_NO_WARNING 1

//int main()
//{
//	int i = 0;
//	for (i = 1;i<=100; i++)
//	if ((i % 3) == 0)
//		printf("%d ", i);
//	return 0;
//}

int main()
{
	int i=0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
	
		if (j > sqrt(i))
		{
			printf("%d ", i);
		}
				
		
	}
	
	return 0;
}

