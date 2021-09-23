#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//指针变量存放地址
//int main() {
//	int a = 10;//4个字节
//	//&a; 取地址
//	//printf("%p\n", &a);
//	//有一种变量是用来存放地址的-指针变量
//
//	//printf("%p\n", &a);
//	//int* p = &a;//取地址
//	//printf("%p\n", p);
//	int* p = &a;
//	*p = 20;//  ---*解引用操作符
//	printf("%d\n", a);
//
//	return 0;
//}

//int main() {
//	char ch = 'w';
//	char* pc = &ch;  // char*类型 名字为pc
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}

//指针大小在32位平台4个字节，64位平台8个字节
//指针变量的大小
//int main() {
//	char ch= 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));
//	return 0;
//}