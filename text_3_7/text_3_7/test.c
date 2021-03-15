#define _CRT_SECURE_NO_WARNINGS 1
 
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

//void left_move(char* arr, int k)
//{
//	int i = 0;
//	assert(arr);
//	int len = strlen(arr)
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; i < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr+len-1)=tmp
//	}
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//
//	return 0;
//
//}


//int FindNum(int arr[][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (1)
//	{
//
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//			x++;
//		else
//			return 1;
//		if (x >= 2 || y <= 0)
//			return 0;
//	}
//}
//
//
//int main()
//{
//	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
//	int k = 7;
//	scanf("%d", &k);
//	int ret = FindNum(arr, k, 3, 3);
//	if (ret == 1)
//		printf("ÕÒµ½ÁË\n");
//	else
//		printf("Î´ÕÒµ½\n");
//
//	return 0; 
//}

//int my_strlen(char* str)
//{
//
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	//int len = my_strlen("abcdef");
//	//printf("%d\n", len);
//
//
//
//	return 0;
//}

//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);
//	assert(dest != NULL);
//
//	//while (*src!='\0');
//	//{
//	//	*dest = *src;
//	//	dest++;
//	//	src++;
//	//}
//	//*dest = *src;
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//}
//
//int main()
//{
//
//
//	char arr1[] = "abcdef";
//	char arr2[] = "bir";
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (*dest!= '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//			{
//				;
//			}
//
//	return ret;
//}
//
//int main()
//{
//
//
//	char arr1[30] = "abcdef";
//	char arr2[] = "bit";
//
//	char*arr3=my_strcat(arr1, arr2);
//	printf("%s\n", arr3);
//
//	return 0;
//}

//void my_strcmp(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else(*str1 < *str2)
//		return -1;
//}
//
//int main()
//{
//
//
//	char arr1[30] = "abcdef";
//	char arr2[] = "bit";
//
//	my_strcmp(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//int main()
//{
//
//
//	char arr1[15] = "abcdef";
//	char arr2[] = "bitqwer";
//
//	int count = 4;
//		char* front = arr1;
//	char* back = arr2;
//	int i = 0;
//	while (*front++)
//		printf("%c\n",*front);
//	front--;
//
//	while (count--)
//	if (!(*front++ = *back++))
//	
//
//	*front = '\0';
//	printf("%s\n", arr1);
//
//	return 0;
//}

//char* my_strstr(char* p1, char* p2)
//{
//	assert(p2 != NULL);
//	assert(p1 != NULL);
//	char*s1 = p1;
//	char*s2 = p2;
//	char*cur = p1;
//	if (*p2 == '\0')
//	{
//		return p1;
//
//	}
//	while (*cur)
//	{
//
//		s1 = cur;
//		s2 = p2;
//
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//
//
//
//}
//
//int main()
//{
//
//
//	char arr1[15] = "abcdef";
//	char arr2[] = "def";
//	char*p = my_strstr(arr1, arr2);
//	printf("%s", p);
//	return 0;
//}

int main()
{
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
		printf("open file success\n");

// 	char* str = strerror(errno);
//	printf("%s\n", str);

	return 0;

}