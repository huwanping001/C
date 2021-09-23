#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//数组

//一维数组的创建和初始化
//#include<string.h>
//int main()
//{
//	//[]里必须使用常量
//	//int arr[10] = { 1, 2, 3 };//不完全初始化，剩下的元素默认初始化为0
//	//char arr2[5] = { 'a', 'b' };
//	//char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//
//	printf("%d\n", sizeof(arr4)); //sizeof是计算arr4所占空间大小 7个元素 - char 7*1 = 7;//7
//	printf("%d\n", strlen(arr4)); //strlen求字符串长度-'\0'之前的字符个数//6
//
//	return 0;
//}

//1.strlen 和sizeof 没有什么关联
//2.strlen 是求字符串长度的-只能针对字符串求长度 - 库函数-使用得引头文件
//3.计算变量、数组、类型得大小-单位是字节-操作符


//#include<string.h>
//int main() {
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//15 随机值
//	return 0;
//}

//数组通过下标来访问
//int main()
//{
//
//	//char arr[] = "abcdef"; //[a][b][c][d][e][f][\0];
//	////printf("%c\n",arr[3]);
//	//int i = 0;
//	//for (i = 0; i < strlen(arr); i++) {
//	//	printf("%c ", arr[i]);
//	//}
//
////	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	int i = 0;
////	for (i = 0; i < sz; i++) 
////	{ 
////		printf("%d ", arr[i]);
////	}
////	return 0;
////}


//数组在内存中是连续存放的  
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}


//二维数组
//行可以省略，列不可以省略
//int main() {
//	int arr[3][4] = { 1, 2, 3, 4, 5 };
//	int arr1[3][4] = { {1, 2, 3,}, 4, 5 };
//	int arr2[][4] = { 1, 2, 3, 4, 5, 6, 7,8 };
//	//char ch[3][5];
//	return 0;
//}


//二维数组的访问
//int main() {
//	int arr[3][4] = { {1, 2, 3},{4, 5} };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 4; j++) {
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//二维数组在内存中的存储
//int main() {
//	int arr[3][4] = { {1, 2, 3},{4, 5} };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 4; j++) {
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//冒泡排序函数
//
//int bubble_sort(int arr[],int sz) 
//{
//	
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
//		int flag = 1;  //假设这一趟要排序的数据已经有序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1]) 
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//	
//}
//
//int main() {
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	//对arr进行排序，排成一个升序；
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址 &arr[0]
//	bubble_sort(arr,sz);//冒泡排序函数
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//数组名是首元素地址(1,2例外）

//int main() {
//	int arr[] = { 1, 2, 3, 4, 5 };
//
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//1.sizeof(数组名)-数组名表示整个数组，sizeof(数组名）计算的是整个数组的大小，单位是字节
//	//2.&数组名 ，数组名代表整个数组，&数组名，取出的是整个数组的地址
//
//	printf("%p\n", arr);//首元素地址
//	printf("%p\n", &arr[0]);//首元素地址
//	printf("%d\n", *arr);
//	printf("%p\n", &arr);//数组的地址
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr+1);
//	//数组的地址和数组首元素地址相同，但是意义完全不同
//
//	return 0;
//}