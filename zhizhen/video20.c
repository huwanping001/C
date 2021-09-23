#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int b = 0;
//	int a = 10;
//	int* pa = &a;//初始化
//	int* p = NULL;//空指针NULL--初始化指针，给指针赋值
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	//
//	pa = NULL;
//	return 0;
//}


//指针运算

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p += 2;
//	}
//	return 0;
//}



//指针-指针 元素的个数--指向同一块空间
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8,  9, 10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}



//计算字符串长度
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//strlen--求字符串长度
//	//递归-模拟实现了strlen-计数器的方式1，递归的方式2
//	//
//	
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//指针的关系运算

//指针和数组
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址-首元素地址
//	printf("%p\n", arr + 1);
//	//0053F74C
//	//0053F750
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	//0053F74C
//	//0053F750
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	//0053F74C
//	//0053F774
//
//	//1.&arr- &数组名-数组名不是首元素地址-数组名表示整个数组-&数组名 取出的式整个数组的地址。
//	//2.sizeof(arr)-sizeof(数组名)-数组名表示的整个数组-sizeof(数组名)计算的是整个数组的大小
//
//	return 0;
//}


//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%d ", *(p + i));
//	}
//	/*for (i = 0; i < 10; i++) {
//		printf("%p  ========  %p\n", p + i, &arr[i]);
//	}*/
//	return 0;
//}


//二级指针

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
//	int*** pppa = &ppa;//pppa就是三级指针
//	***pppa = 20;
//	printf("%d\n", ***pppa);
//	printf("%d\n", a);
//	return 0;
//}

//指针数组--数组--存放指针的数组

int main()
{
	int a = 10, b = 20, c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//整型数组--存放整型
	//字符数组--存放字符
	//指针数组--存放指针
	//int arr[10];
	int* arr[3] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", * arr[i]);
	}
	return 0;
}

//数组指针--指针