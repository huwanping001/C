#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//C ����������ɴ洢��ͬ����������ı�����
//�ṹ�� C �������һ���û��Զ���Ŀ��õ��������ͣ�
//���������洢��ͬ���͵������
//
//�ṹ���ڱ�ʾһ����¼����������Ҫ����ͼ������鱾�Ķ�̬��
//��������Ҫ����ÿ������������ԣ�


//����һ��ѧ��
//����
//����
//�绰
//�Ա�

//struct-�ṹ��ؼ���     Stu-�ṹ���ǩ     struct Stu-�ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}; //s1, s2, s3;//s1,s2,s3 ������ȫ�ֵĽṹ�����



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
//	struct Stu s1 = {"����", 20, "18349978315", "��"};//�����ṹ�����--�ֲ�����
//	Stu s2 = {"С��", 22, "13890825416", "Ů"};
//
//	return 0;
//}


//�ṹ��Ƕ�׳�ʼ����
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


//�ṹ�崫��-���ṹ���ַ
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
//	Stu s = { "С��", 40, "13980228954", "��" };
//	//��ӡ�ṹ������
//	//Print1��Print2�ĸ�����---Print2����-ϵͳ����С
//	Print1(s);//���ṹ��
//	Print2(&s);//����ַ  
//	return 0;
//}


//��������--ѹջ����
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

