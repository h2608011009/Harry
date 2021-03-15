#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


void* my_memcpy(void* dest, const void* src, size_t num)
{

	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;



	}
	return ret;

}

void* my_memmove(void* dest, const void* src, size_t num)
{






}


int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 ,6,7,8,9,10};
	int arr2[5] = { 0 };

	

	//my_memcpy(arr2, arr1, sizeof(&arr1));
	//int i = 0;
	//for (i = 0; i < 5;i++)
	//printf("%d ", arr2[i]);

	return 0;
}