#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int (*p)[10]=&arr;
	printf("%d",*( *(p+1)));

	return 0;
}