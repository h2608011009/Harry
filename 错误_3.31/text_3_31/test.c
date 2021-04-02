#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

//int main()
//{
//	int num = 0;
//	while (1)
//	{
//		int weight, height;
//		
//		scanf("%d%d", &weight, &height);
//		printf("BMI=%.2lf\%%\n", (float)weight / ((float)height/100*height/100));
//		
//	}
//	return 0;
//}

//int main()
//{
//	int a = 4;
//	int b = 5;
//	double c = (double)a/ b;
//	printf("%lf", c);
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 100000; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 10; j <= 10000; j *= 10)
//		{
//			sum += (i / j)*(i%j);
//		}
//		if (sum == i)
//		{
//			printf("%d\n", i);
//		}
//
//	}
//
//
//	return 0;
//}

//int main()
//{
//	int h, m, s;
//	int sum = 0;
//	scanf("%d", &sum);
//	h = sum / 3600;
//	m = sum / 60%60;
//	s = sum % 60;
//	printf("%d %d %d", h, m, s);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int h = 0;
//	int m = 0;
//
//	while (1)
//	{
//
//		scanf("%d%d%d", &n, &h, &m);
//		if (m > n*h)
//		{
//			printf("错误输入\n");
//		}
//		else
//		{
//		
//		int ret = n - m / h;
//		if (m%h >= 1)
//			ret--;
//		printf("%d\n", ret);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	float price=0.0;
//	int d = 0;
//	int m = 0;
//	int flag=0;
//	scanf("%f%d%d%d", &price, &d, &m, &flag);
//	if (d == 11 && m == 11)
//	{
//		price *= 0.7;
//	}
//	if (d == 12 && m == 12)
//	{
//		price *= 0.8;
//	}
//	if (flag == 1)
//		price -= 50;
//	printf("%-.3lf\n", price);
//	return 0;
//}


//int main()
//{
//	int tmp = 0;
//	int i = 0;
//	int k = 0;
//	int j = 0;
//	int n = 0;
//	int score[40] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//	for (k = 0; k < n - 1; k++)
//	{
//
//		for (j = 0; j < n - k-1; j++)
//		{
//			if (score[j] >score[j +1])
//			{
//				tmp = score[j];
//				score[j] = score[j + 1];
//				score[j + 1] = tmp;
//			}
//
//		}
//		
//
//	}
//	for (i = 0; i < n-1; i++)
//		{
//			printf("%d\t", score[n-1-i]);
//		}
//	return 0;
//}


//
//#include <stdio.h>
//int cmp_int(const void* e1, const void*e2)
//{
//	return *(int*)e2 - *(int*)e1;
//}
//int main()
//{
//	int n = 0;
//	int score[40] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i<n; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//	//对所有数字排序
//	int j = 0;
//		//使用库函数排序
//		qsort(score, n, 4, cmp_int);
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", score[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a + b > c&&a + c > b&&b + c > a)
//	{
//		if (a==b&&b==c)
//		{
//			printf("Equilateral triangle!");
//		}
//		else if ((a == b &&a != c) || (a == c && a != b) || (c == b && a != c))
//		{
//			printf("Isosceles triangle!");
//		}
//		else
//		{
//			printf("Ordinary triangle!");
//		}
//	}
//	else
//	{
//		printf("Not a triangle!");
//	}
//
//	return 0;
//}

int main()
{
	float a = 0;
	float b = 0;
	float c = 0;
	while (scanf("%f%f%f", &a, &b, &c) != EOF)
	{
	
	if (a != 0)
	{
		float disc = b*b - 4 * a*c;
		if (disc > 0)
		{
			printf("x1=%.2lf;x2=%.2lf\n", (-b + sqrt(disc)) / (2 * a), (-b - sqrt(disc)) / (2 * a));
		}
		else if (disc < 0)
		{
			printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", -b / (2 * a), sqrt(-disc) / (2 * a), -b / (2 * a), sqrt(-disc) / (2 * a));
		}
		else
		{
			printf("x1=x2=%.2lf\n", -b /( 2 * a));
		}
	}
	else
	{
		printf("Not quadratic equation\n");
	}

	}


	return 0;
}
