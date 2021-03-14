#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int count_one(int n)
//{
//	int count=0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	b = count_one(a);
//	printf("%d\n", b);
//	return 0;
//}

//void print(int n)
//{
//	int i = 0;
//	for (i = 1; i < n+1; i++)
//	{
//		int j = 1;
//		for (j = 1; j < i+1; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i*j);
//			
//		}
//
//		printf("\n");
//	}
//
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//		return 0;
//
//}


//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr)-1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
void reverse_string(char arr[])
{
	int len = strlen(arr);
		char tmp = arr[0];
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (strlen(arr+1) >= 2)
		reverse_string(arr + 1);
	arr[len - 1] = tmp;

}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;


}


double Pow(int n, int k)
{
	if (k < 0)
		return (1.0 / Pow(n, -k));
	else if (k == 0)
		return 1;
	else
		return n*Pow(n, k - 1);

}
 

