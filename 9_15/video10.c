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


//�ݹ麯��     ջ���
//int main() {
//	printf("xiaohu\n");
//	main();
//	return 0;
//}


//�ݹ麯��ʵ�ֽ׳�
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

//�ݹ�ֽ�����
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
//	//�ݹ�
//	print(num);
//	return 0;
//}


//�ݹ�������Ҫ����
//���������������������������������ʱ�򣬵ݹ齫���ټ���
//ÿ�εݹ����֮��Խ��Խ�ӽ������������

//��������ʱ�������ַ�������
// 
//int my_strlen(char* str)
//{
//	//�����ַ�������
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//�ݹ�ķ���  
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
//	//int len = strlen(arr);//���ַ�������
//	//printf("%d\n", len);
//
//	int len = my_strlen(arr);//���鴫�δ���ȥ�ĵĲ����������飬������Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//	return 0;
//}


//�ݹ������
//n�Ľ׳� ����--ѭ��  �ݹ�--��


//쳲�����  �ݹ�
//1 1 2 3 5 8 13 21 34 55
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//���Ե�����쳲��������ļ������
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
 

//쳲�����ѭ������

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
//	//TDD--������������
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}





