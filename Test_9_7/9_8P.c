#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//1.���泣��
//2.const ����
//3.#define����ı�ʶ������
//4.ö�ٳ���

//2
//int main() {
//	//const - ������
//	//const���εĳ�������
//	const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);
//
//	return 0;
//}

//3
//#define MAX 10
//int main() {
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}


//4ö�ٳ���
//һһ����

//enum Sex {
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main() {
//
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}


//�ַ�����\0��������
//#include<string.h>
//int main() {
//	char arr1[] = "abc"; //����'\0';'\0'�ַ���ֵ��0
//	char arr2[] = { 'a', 'b', 'c','\0'};//��\0��Ҳ����дΪ0
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//3
//	return 0;
//}


//#include<string.h>
//int main() {
//	printf("%d\n", strlen("c:\test\32\test.c"));//�ַ�������13
//	printf("%c\n", '\132');
//	//\32--32��ʾ�����˽������� '0-7'
//
//	printf("%c\n", '\x61');
//	return 0;
//}


//if ��֧���

// ѭ�����  while
//for ѭ��

//do whileѭ��


//�����ĸ���
//int Add(int x, int y) {
//	int z = x + y;
//	return z;
//}
//
//int main() {
//	int num1 = 10;
//	int num2 = 10;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(num1, num2);
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}




//���� һ����ͬ����Ԫ�صļ��ϣ�

//�����±�Ĭ�ϴ�0��ʼ

//int main() {
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//char ch[20];
//
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	while (i < 10) {
//		printf("%d\n", arr[i]);
//		i ++;
//	}
//	return 0;
//
//}



//������
//+-*\%����������

//��λ������
//<<����
//>>����

//int main() {
//	int a = 1;
//	int b = a << 1;
//	int c = a << 2;
//	printf("%d %d %d\n", b, c, a);
//}




//λ��������2���ƣ�
//&��λ��  ͬʱΪ1��Ϊ1�����������Ϊ0������Ϊ���Ϊ�棻
//|��λ��  ͬʱΪ0��Ϊ0�����������Ϊ1��һ��Ϊ����Ϊ�棻
//^��λ��� ��ͬΪ0����ͬΪ1��

//int main() {
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	//011
//	//101
//	int d = a | b;
//	int e = a ^ b;
//	printf("%d %d %d\n", c, d, e);
//	return 0;
//}



//��ֵ������
//=��ֵ ==�ж�
//a = a + 10;
//a += 10;
//

//��Ŀ������ һ��������
//˫Ŀ������ ����������
//��Ŀ������ ����������

// 0��ʾ��
//��0��ʾ�棻



//sizeof������
//int main() {
//	int a = 10;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };//7*4 = 24
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//	printf("%d\n", sizeof(arr));//���������С����λ���ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//	
//}




//~��λȡ��

//ԭ��   --->����   ---->����
//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
// ����--ԭ�룬���룬������ͬ
// 
// ����-->
//ԭ��   ----------->����   --------------------->����
//ֱ�Ӱ������� --   ԭ��ķ���λ����--------------����+1
// д���Ķ��������� ����λ��λȡ��---------------
//


//-2
//10000000000000000000000000000010--ԭ�� 
//11111111111111111111111111111101--���� 
//11111111111111111111111111111110--����
// 
// 
// 
//  
//int main() {
//	int a = 0;//4���ֽڣ�32bitλ
//	int b = ~a;//b���з�������
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//ԭ�룬���룬����  ԭ��ȡ����һ��Ϊ���룬�����һȡ����Ϊԭ�� ע�����λ����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ��룻
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	printf("%d\n", b);//��ӡ�����������ԭ��
//	return 0;
//}



//����++ ��ǰ��++������
//
//int main() {
//	int a = 10;
//	int b = a++;
//	int c = ++a;
//	int d = a--;
//	int e = --a;
//	printf("a = %d b =  %d c = %d d = %d e = %d\n", a, b, c, d, e);//10 10 12 12 10
//	return 0;
//}



//ǿ������ת��
//int main() {
//	int a = (int)3.14;
//	return 0;
//}



//�߼�������
//int main() {
//	//��-��0
//	//��-0
//	//&&-�߼���
//	//||-�߼���
//	//���߼���
//
//	int a = 3;
//	int b = 0;
//	int c = a && b;
//	int d = a || b;
//	int e = !a;
//	printf("%d %d %d \n", c, d, e);
//	return 0;
//}




//���������� ��Ŀ������

//exp1 ? exp2 : exp3;

//int main() {
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//
//	printf("%d\n", max);
//	return 0;
//
//}



//[]ȡ�±������ ��������������
//int ADD(int x, int y) {
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main() {
//	int arr[10] = { 0 };
//	arr[4];//[]�±����ò�����
//
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = ADD(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//C���Գ����ؼ���
//auto break case char const continue default do double else enum extern float for goto
//if int long register return short signed sizeof static struct switch typedef union 
//unsigned void volatile while


//typedef
//int main() {
//	//typedef -���Ͷ��� - �����ض���
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 10;
//	return 0;
//}



//static ���ξֲ�����  --1
//�ֲ������������ڱ䳤
// 
//static����ȫ�ֱ���--2
//static����ȫ�ֱ���
//�ı��˱����������� - �þ�̬��ȫ�ֱ���ֻ�ܰ��Լ����ڵ�Դ�ļ��ڲ�ʹ��
//�����ļ���û����ʹ����

//void test() {
//	static int a = 1;//a��һ����̬�ֲ�����
//	a++;
//	printf("a = %d\n", a);//2.3.4.5.6��û��static ��Ϊ 2 2 2 2 2 
//}
//
//int main() {
//	int i = 0;
//	while (i < 5) {
//		test();
//		i++;
//	}
//
//	return 0;
//}

//static ���κ���������ȫ�ֱ�������--3��
//static���κ����ı��˺������������ԣ���ͨ��һ������
//�ⲿ��������--�ڲ���������

//
//extern int Add(int, int);
//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//#define���峣���ͺ�
//#define MAX 10;
//#define���Զ����-������

//������ʵ��

//int Max(int x, int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
//
//int main() {
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//��ķ�ʽ
//	max = MAX(a, b);
//	//max = a>b?a:b;
//	printf("max = %d\n", max);
//	return 0;
//}