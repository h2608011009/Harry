#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{

		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j]>arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;

			}
		}
	}

}

struct Stu
{
	char name[20];
	int age;
};


int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

int cmp_float(const void* e1, const void* e2)
{
	if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else
		return -1;
}

int cmp_stu_by_age(const void*e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}

int cmp_stu_by_name(const void*e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->name ,((struct Stu*)e2)->name);
}

void qsort(void *base, 
			size_t num,
			size_t width, 
			int(__cdecl *compare)(const void *elem1, const void *elem2));

void test1()
{

	int i = 0;
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	

}

void test2()
{
	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%.1f ", f[i]);
	}
}


void test3()
{
struct Stu s[3] = { { "zzzz", 20 }, { "xxx", 30 } ,{ "ccccc", 10 } }; 
int sz = sizeof(s) / sizeof(s[0]);
qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
int i = 0;
for (i = 0; i < sz; i++)
{
	printf("%s %d\n", s[i].name, s[i].age);
}
}

void test4()
{
	struct Stu s[3] = { { "zzzz", 20 }, { "xxx", 30 }, { "ccccc", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s %d\n", s[i].name, s[ i].age);
	}
}

void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;

	}
}



void bubble_sort(void* base, int sz, int width, int(*cmp)(void* e1,void* e2))
{

	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{

		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{

			if (cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
			{
				Swap((char*)base + j*width, (char*)base + (j + 1)*width);
		
			}
		}
	}
}

void test5()

{
	int i = 0;
	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz,sizeof(arr[0]));
}

void test6()
{
	struct Stu s[3] = { { "zzzz", 20 }, { "xxx", 30 }, { "ccccc", 10 } };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]));
}


int main()
{
	
	

	//bubble_sort(arr, sz);
	test4();
	return 0;
}

