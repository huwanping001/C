#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int b = 0;
//	int a = 10;
//	int* pa = &a;//��ʼ��
//	int* p = NULL;//��ָ��NULL--��ʼ��ָ�룬��ָ�븳ֵ
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


//ָ������

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



//ָ��-ָ�� Ԫ�صĸ���--ָ��ͬһ��ռ�
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8,  9, 10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}



//�����ַ�������
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
//	//strlen--���ַ�������
//	//�ݹ�-ģ��ʵ����strlen-�������ķ�ʽ1���ݹ�ķ�ʽ2
//	//
//	
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//ָ��Ĺ�ϵ����

//ָ�������
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��ַ-��Ԫ�ص�ַ
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
//	//1.&arr- &������-������������Ԫ�ص�ַ-��������ʾ��������-&������ ȡ����ʽ��������ĵ�ַ��
//	//2.sizeof(arr)-sizeof(������)-��������ʾ����������-sizeof(������)���������������Ĵ�С
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


//����ָ��

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	int*** pppa = &ppa;//pppa��������ָ��
//	***pppa = 20;
//	printf("%d\n", ***pppa);
//	printf("%d\n", a);
//	return 0;
//}

//ָ������--����--���ָ�������

int main()
{
	int a = 10, b = 20, c = 30;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;
	//��������--�������
	//�ַ�����--����ַ�
	//ָ������--���ָ��
	//int arr[10];
	int* arr[3] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", * arr[i]);
	}
	return 0;
}

//����ָ��--ָ��