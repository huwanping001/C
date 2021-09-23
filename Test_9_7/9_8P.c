#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//1.字面常量
//2.const 常量
//3.#define定义的标识符常量
//4.枚举常量

//2
//int main() {
//	//const - 常属性
//	//const修饰的常变量；
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


//4枚举常量
//一一例举

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


//字符串‘\0’结束；
//#include<string.h>
//int main() {
//	char arr1[] = "abc"; //结束'\0';'\0'字符的值是0
//	char arr2[] = { 'a', 'b', 'c','\0'};//‘\0’也可以写为0
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//3
//	return 0;
//}


//#include<string.h>
//int main() {
//	printf("%d\n", strlen("c:\test\32\test.c"));//字符串长度13
//	printf("%c\n", '\132');
//	//\32--32表示两个八进制数字 '0-7'
//
//	printf("%c\n", '\x61');
//	return 0;
//}


//if 分支语句

// 循环语句  while
//for 循环

//do while循环


//函数的概念
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




//数组 一组相同类型元素的集合；

//数组下标默认从0开始

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



//操作符
//+-*\%算数操作符

//移位操作符
//<<左移
//>>右移

//int main() {
//	int a = 1;
//	int b = a << 1;
//	int c = a << 2;
//	printf("%d %d %d\n", b, c, a);
//}




//位操作符（2进制）
//&按位与  同时为1才为1，其他情况都为0，两个为真才为真；
//|按位或  同时为0才为0，其他情况都为1，一个为真则为真；
//^按位异或 相同为0，不同为1；

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



//赋值操作符
//=赋值 ==判断
//a = a + 10;
//a += 10;
//

//单目操作符 一个操作数
//双目操作符 两个操作数
//三目操作符 三个操作数

// 0表示假
//非0表示真；



//sizeof操作符
//int main() {
//	int a = 10;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };//7*4 = 24
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof a);//4
//	printf("%d\n", sizeof(arr));//计算数组大小，单位是字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
//	return 0;
//	
//}




//~按位取反

//原码   --->反码   ---->补码
//只要是整数，内存中存储的都是二进制的补码
// 正数--原码，反码，补码相同
// 
// 负数-->
//原码   ----------->反码   --------------------->补码
//直接按照正负 --   原码的符号位不变--------------反码+1
// 写出的二进制序列 其他位按位取反---------------
//


//-2
//10000000000000000000000000000010--原码 
//11111111111111111111111111111101--反码 
//11111111111111111111111111111110--补码
// 
// 
// 
//  
//int main() {
//	int a = 0;//4个字节，32bit位
//	int b = ~a;//b是有符号整型
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//原码，反码，补码  原码取反加一变为补码，补码减一取反变为原码 注意符号位不变
//	//负数在内存中存储的时候，存储的是二进制的补码；
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001
//	printf("%d\n", b);//打印的是这个数的原码
//	return 0;
//}



//后置++ 和前置++的区别；
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



//强制类型转换
//int main() {
//	int a = (int)3.14;
//	return 0;
//}



//逻辑操作符
//int main() {
//	//真-非0
//	//假-0
//	//&&-逻辑与
//	//||-逻辑或
//	//！逻辑非
//
//	int a = 3;
//	int b = 0;
//	int c = a && b;
//	int d = a || b;
//	int e = !a;
//	printf("%d %d %d \n", c, d, e);
//	return 0;
//}




//条件操作符 三目操作符

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



//[]取下标操作符 （）函数操作符
//int ADD(int x, int y) {
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main() {
//	int arr[10] = { 0 };
//	arr[4];//[]下表引用操作符
//
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = ADD(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//C语言常见关键字
//auto break case char const continue default do double else enum extern float for goto
//if int long register return short signed sizeof static struct switch typedef union 
//unsigned void volatile while


//typedef
//int main() {
//	//typedef -类型定义 - 类型重定义
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 10;
//	return 0;
//}



//static 修饰局部变量  --1
//局部变量生命周期变长
// 
//static修饰全局变量--2
//static修饰全局变量
//改变了变量的作用域 - 让静态的全局变量只能哎自己所在的源文件内部使用
//出了文件就没法再使用了

//void test() {
//	static int a = 1;//a是一个静态局部变量
//	a++;
//	printf("a = %d\n", a);//2.3.4.5.6若没有static 则为 2 2 2 2 2 
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

//static 修饰函数与修饰全局变量相似--3；
//static修饰函数改变了函数的连接属性，普通的一个函数
//外部连接属性--内部连接属性

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


//#define定义常量和宏
//#define MAX 10;
//#define可以定义宏-带参数

//函数的实现

//int Max(int x, int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//
//int main() {
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//	//宏的方式
//	max = MAX(a, b);
//	//max = a>b?a:b;
//	printf("max = %d\n", max);
//	return 0;
//}