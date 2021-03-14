#define _CRT_SECURE_NO_WARNING 1

//int main()
//{
//	int i = 0, n = 0, ret = 1, sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			
//			ret = ret*i;
//		}
//		sum = sum + ret;
//		
//	}
//	printf("%d", sum);
//	return 0;
//}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 6, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int k = 7;
	int left = 0;
	int right = sz - 1;
	int mid = 0;

	
	while (left <= right)
	{
mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] == k)
		{
			printf("find it");
			break;
		}
	}
	if (left>right)
		printf("can not find it");
	return 0;
}