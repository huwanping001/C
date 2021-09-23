#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//#include "add.h"
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//递归函数     栈溢出
//int main() {
//	printf("xiaohu\n");
//	main();
//	return 0;
//}


//递归函数实现阶乘
//long Fact(int m) {
//	if (m < 0)
//		return -1;
//	else if (m == 0 || m == 1)
//		return 1;
//	else
//		return (m * Fact(m - 1));
//}
//
//int main() {
//	int n;
//	scanf("%d", &n);
//	long ret = Fact(n);
//	if (ret == -1) {
//		printf("data error\n");
//	}
//	else
//	{
//		printf("%d!=%ld\n", n, ret);
//	}
//	return 0;
//}

//递归分解整数
//void print(int n) {
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main() {
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//递归
//	print(num);
//	return 0;
//}


//递归两个必要条件
//存在限制条件，当满足这个限制条件的时候，递归将不再继续
//每次递归调用之后越来越接近这个限制条件

//不创建临时变量求字符串长度
// 
//int my_strlen(char* str)
//{
//	//计算字符串长度
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//递归的方法  
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main() {
//	char arr[] = "bit";
//	//int len = strlen(arr);//求字符串长度
//	//printf("%d\n", len);
//
//	int len = my_strlen(arr);//数组传参传过去的的不是整个数组，而是首元素的地址
//	printf("len = %d\n", len);
//	return 0;
//}


//递归与迭代
//n的阶乘 迭代--循环  递归--简化


//斐波拉契  递归
//1 1 2 3 5 8 13 21 34 55
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//测试第三个斐波拉契数的计算次数
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
 

//斐波拉契循环迭代

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
// 
//int main() {
//	int n;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD--测试驱动开发
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}





