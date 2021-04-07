
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	char op = 0;
//	double a = 0;
//	double b = 0;
//
//	while ((scanf("%lf%c%lf",&a,&op,&b))!=EOF)
//	{
//		switch (op)
//		{
//
//		case '+':
//			printf("%.4lf%c%.4lf=%.4lf", a, op, b, a + b);
//			break;
//		case '-':
//			printf("%.4lf%c%.4lf=%.4lf", a, op, b, a - b);
//			break;
//		case '*':
//			printf("%.4lf%c%.4lf=%.4lf", a, op, b, a * b);
//			break;
//		case '/':
//			if (b==0.0)
//			{
//				printf("Wrong!Division by zero!");
//				break;
//			}
//				printf("%.4lf%c%.4lf=%.4lf", a, op, b, a / b);
//			break;
//		default:
//			printf("Invalid operation!");
//			break;
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int j = 0;
//	int i = 0;
//	int n = 0;
//	while (1)
//	{
//
//		scanf("%d", &n);
//		int tmp = n;
//		for (i = 0; i < tmp; i++)
//		{
//			for (j = 0; j < n; j++)
//				printf("* ");
//			n--;
//			printf("\n");
//		}
//
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	while (1)
//	{
//		scanf("%d", &n);
//		int tmp = n;
//		int tml = n - 1;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < tmp - 1; j++)
//			{
//				printf("  ");
//				
//			}
//			tmp--;
//			for (j = 0; j < n - tml; j++)
//			{
//				
//				printf("* ");
//			}
//			tml--;
//			printf("\n");
//		}
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	while (1)
//	{
//		scanf("%d", &n);
//		//打印n行
//		for (i = 0; i < n; i++)
//		{
//			//输出空格
//			for (j = 0;j<i;j++)
//			{
//				printf(" ");
//			}
//			//输出*号
//			for (j = 0; j < n - i;j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//
//
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	while (1)
//	{
//		scanf("%d", &n);
//		//打印2n+1行
//		for (i = 0; i < 2*n+1; i++)
//		{
//			if (i <= n)
//			{
//
//				for (j = 0; j < n - i; j++)
//				{
//					printf(" ");
//				}
//				for (j = 0; j < i + 1; j++)
//				{
//					printf("* ");
//				}
//
//			}
//
//			if (i>=n+1)
//			{
//
//				for (j = n; j < i; j++)
//				{
//					printf(" ");
//				}
//				for (j = 0; j <2*n+1-i; j++)
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//		
//
//
//	}
//
//
//	return 0;
//}


//#include <stdio.h>
////这个题好坑
//int main()
//{
//	int n = 0;
//	//如果输入的是n，其实每行打印n+1组字符（*和空格）
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		for (i = n; i >= 0; i--)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			//*的后面还有空格-这个比较坑
//			//for (j = i; j<n; j++)
//			//{
//			//	printf(" ");
//			//}
//			printf("\n");
//		}
//		for (i = 1; i <= n; i++)
//		{
//			int j = 0;
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			//*的后边还有空格-这个比较坑
//			for (j = i; j<n; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	while (1)
	{
		scanf("%d", &n);
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j < 2 * (n - i); j++)
			{
				printf(" ");
			}

			for (j = 0; j < i + 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < 2 * (i + 1); j++)
			{
				printf(" ");
			}
			for (j = 0; j < n-i; j++)
			{
				printf("*");
			}

			printf("\n");
		}


	}

	return 0;
}