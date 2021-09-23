#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//C 数组允许定义可存储相同类型数据项的变量，
//结构是 C 编程中另一种用户自定义的可用的数据类型，
//它允许您存储不同类型的数据项。
//
//结构用于表示一条记录，假设您想要跟踪图书馆中书本的动态，
//您可能需要跟踪每本书的下列属性：


//描述一个学生
//名字
//年龄
//电话
//性别

//struct-结构体关键字     Stu-结构体标签     struct Stu-结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}; //s1, s2, s3;//s1,s2,s3 是三个全局的结构体变量



//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	struct Stu s1 = {"张三", 20, "18349978315", "男"};//创建结构体变量--局部变量
//	Stu s2 = {"小胡", 22, "13890825416", "女"};
//
//	return 0;
//}


//结构体嵌套初始化。
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe", {100, 'w', "hello world", 3.14}, arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}


//结构体传参-传结构体地址
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//void Print1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//
//}
//void Print2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//}
//int main()
//{
//	Stu s = { "小胡", 40, "13980228954", "男" };
//	//打印结构体数据
//	//Print1和Print2哪个更好---Print2更好-系统开销小
//	Print1(s);//传结构体
//	Print2(&s);//传地址  
//	return 0;
//}


//函数传参--压栈操作
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//	return 0;
//}

