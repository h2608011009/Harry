#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	while (1)
//	{
//		scanf("%d", &n);
//		for (i = 0; i < n;i++)
//		{
//			
//
//			for (j = 0; j < i;j++)
//				printf(" ");
//				printf("*\n");
//
//		}
//
//
//	}
//
//	return 0;
//}

//int main()
//{
//
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	while (1)
//	{
//		scanf("%d", &n);
//		for (i = 0; i < n;i++)
//		{
//
//			for (j = 0; j < n;j++)
//			{
//				if (i == j)
//					printf("*");
//				else if (i==(n-j-1))
//					printf("*");
//				else
//					printf(" ");
//
//			}
//
//			printf("\n");
//		}
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	while((scanf("%d", &n)) != EOF)
//	{
//		for (i = 0; i < n;i++)
//		{
//
//			for (j = 0; j<n; j++)
//			{
//				if (i == 0 || i == n - 1)
//					printf("* ");
//				else if (j == 0 || j == n - 1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//
//			//for (j = 0; j < n; j++)
//			//{
//			//	if ((i == 0 || i == n - 1)&&j!=0)
//			//		printf(" *");
//			//	else if (j == n - 1)
//			//		printf(" *");
//			//	else if (j == 0)
//			//		printf("*");
//			//	else
//			//		printf("  ");
//			//}
//
//			//printf("\n");
//		}
//
//
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		for (i = 0; i < n; i++)
//		{
//
//			for (j = 0; j <= i; j++)
//			if ((i!=1&&i!=n-1)&&(j!=0&&j!=i))
//				printf("  ");
//			else
//				printf("* ");
//
//			printf("\n");
//		}
//
//
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		for (i = 0; i < n;i++)
//		{
//
//			for (j = 0; j <= i; j++)
//			{
//				printf("%d ", j + 1);
//			}
//
//			printf("\n");
//		}
//
//
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int min = 100;//假设最小值是100
//	int max = 0;//假设最大值是0
//	int score = 0;
//	for (i = 0; i<7;i++)
//	{
//		scanf("%d ", &score);//输入
//		sum += score;//求和
//		if (score > max)
//			max = score;//求最大值
//		if (score < min)
//			min = score;//求最小值
//	}
//	printf("%.2f\n", (float)(sum) / 5);
//	return 0;
//}

//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d",n);
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 0;
//	int tmp = 0;
//	int score[50] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n;i++)
//	{
//		scanf("%d", &score[i]);
//	}
//	scanf("%d", &score[i]);
//	for (i = n; i>0; i--)
//	{
//		if (score[i] < score[i - 1])
//		{
//			tmp = score[i];
//			score[i] = score[i - 1];
//				score[i - 1] = tmp;
//		}
//
//	}
//	for (i = 0; i <= n; i++)
//		printf("%d ", score[i]);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	
//	int num[100] = { 0 };
//	int count = 0;
//	scanf("%d", &n);
//	for (i = 2; i <= n; i++)
//	{
//		num[i] = i;
//	}
//	for (i = 2; i <= n; i++)
//	{
//		int j = 0;
//		for (j = i + 1; j <= n; j++)
//		{
//			if (num[j] % i == 0)
//				num[j] = 0;
//		}
//	}
//	for (i = 2; i <= n; i++)
//	{
//		if (num[i] != 0)
//			printf("%d ", num[i]);
//		else
//			count++;
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i<n; i++)
//	{
//		if (n%i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	//题目相当于打印n以内的素数
//	while (scanf("%d", &n) != EOF)
//	{
//		int i = 0;
//		int count = 0;
//		for (i = 2; i <= n; i++)
//		{
//			if (is_prime(i) == 1)
//			{
//				printf("%d ", i);
//			}
//			else
//			{
//				count++;
//			}
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
//}


//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	int a[100][100] = { 0 };
//	int b[100][100] = { 0 };
//	while (1)
//	{
//		scanf("%d%d", &m, &n);
//		for (i = 0; i < m; i++)
//		{
//			for (j = 0; j < n; j++)
//				scanf("%d", &a[i][j]);
//		}
//		for (i = 0; i < m; i++)
//		{
//			for (j = 0; j < n; j++)
//				scanf("%d", &b[i][j]);
//		}
//		for (i = 0; i < m; i++)
//		{
//			for (j = 0; j < n; j++)
//			if (a[i][j] == b[i][j])
//				count++;
//		}
//		printf("%.2f\n", (float)(count) * 100 / (n*m));
//	}
//
//	return 0;
//}

//#include <string.h>
//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 6);
//	puts(str1);
//	return 0;
//}

//int main()
//{
//	char ID[20] = { 0 };
//	char password[20] = { 0 };
//	while ((scanf("%s%s",ID,password)) != EOF)
//	{
//		if (strcmp(ID, "admin") == 0 && strcmp(password, "admin") == 0)
//			printf("Login Success\n");
//		else
//			printf("Login Fail");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int n = 2019;
//	int count = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		int g = (i % 10);
//		int s = ((i / 10) % 10);
//		int b = ((i / 100) % 10);
//		int q = (i / 1000);
//		if (g == 9 || s == 9 || b == 9 || q == 9)
//		{
//			count++;
//		}
//		
//	}
//		printf("%d\n", count);
//
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 2019; i++)
//	{
//		//判断i是否包含9
//		int t = i;
//		while (t)
//		{
//			if (t % 10 == 9)
//			{
//				count++;
//				break;
//			}
//			t = t / 10;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 100;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i)
//	}
//
//
//	return 0;
//}


int main()
{
	int i = 0;
	float sum = 0;
	float min = 100;//假设最小值是100
	float max = 0;//假设最大值是0
	float score = 0;
	int n = 0;
	scanf("%d",&n);
		for (i = 0; i<n; i++)
		{
			scanf("%d ", &score);//输入
			sum += score;//求和
			if (score > max)
				max = score;//求最大值
			if (score < min)
				min = score;//求最小值
			int avg = (sum - min - max) / n
		}

		printf("%.2lf %.2lf %.2lf\n",avg, min, max);
	
	return 0;
}
