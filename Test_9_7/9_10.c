#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//ָ�������ŵ�ַ
//int main() {
//	int a = 10;//4���ֽ�
//	//&a; ȡ��ַ
//	//printf("%p\n", &a);
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
//
//	//printf("%p\n", &a);
//	//int* p = &a;//ȡ��ַ
//	//printf("%p\n", p);
//	int* p = &a;
//	*p = 20;//  ---*�����ò�����
//	printf("%d\n", a);
//
//	return 0;
//}

//int main() {
//	char ch = 'w';
//	char* pc = &ch;  // char*���� ����Ϊpc
//	*pc = 'a';
//	printf("%c\n", ch);
//	return 0;
//}

//ָ���С��32λƽ̨4���ֽڣ�64λƽ̨8���ֽ�
//ָ������Ĵ�С
//int main() {
//	char ch= 'w';
//	char* pc = &ch;
//	printf("%d\n", sizeof(pc));
//	return 0;
//}