#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//    int var = 20;   /* ʵ�ʱ��������� ��ʱ�� VAR ��������Ǵ���ĳ����ַ�ģ���ַ��Ӧĳ���ڴ浥Ԫ���õ�Ԫ�д洢������20 */
//    int* ip;         /* ָ����������� ������һ��ָ�� ��һ���ڴ浥Ԫ�ĵ�ַ���� */
//
//    ip = &var;      /* ��ָ������д洢 var �ĵ�ַ ���ǽ���ֵַ��ֵ��ָ���������*/
//
//    /* ��ָ������д洢�ĵ�ַ ����&����ֱ�������var���洢�����ݵ��ڴ浥Ԫ�ĵ�ַ*/
//    printf("Address of var variable: %p\n", &var);
//
//    /* ��ָ������д洢�ĵ�ַ ip������������ֵ���ĵ�ַ��ֵ ����������ǵ�ֵַ */
//    printf("Address stored in ip variable: %p\n", ip);
//
//    /* ʹ��ָ�����ֵ *ip������Ƕ��嵽����ڴ浥Ԫ֮���ڴ浥Ԫ�����洢�����ݵ�ֵҲ���ǽ�20��ֵ��var��20���ֵ */
//    printf("Value of *ip variable: %d\n", *ip);
//
//    return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}



//int main()
//{
//    int* p = 0;
//    int a;
//    p = &a;
//    printf("����һ������\n");
//    scanf("%d", p);
//    printf("%d\n", *p);
//    return 0;
//}



//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//int* p; *p�ܹ�����4���ֽ�
//char* p; *p�ܹ�����1���ֽ�
//double* p; *p�ܹ�����8���ֽ�

// 
//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));*/
//
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
// 	return 0;
//}


//ָ�����;����ˣ�ָ����һ���߶�Զ��ָ�벽����
//int *p;  p+1-->4
//char *p;  p+1-->1
//double *p;  p+1-->8

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//������-��Ԫ�ص�ַ
//	//char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


//��ַ���ݣ���ֵַ
//void func1(int* a, int** b);
//
//void func1(int* a, int** b)
//{
//    (*a)++;//��ַ�����õõ�10----��ͬ10++
//    (*b)++;//������Ȼ����������ָ�����ʽ������ʵ��ָ��c�ĵ�ַ��
//           //������Ϊ���ﱾ�ʻ���ֵ���ݣ�ֻ�������ֵ�ǵ�ֵַ
//           //c�ĵ�ַ�Ӽ�
//}
//
//int main()
//{
//    int a[2] = { 10, 20 };
//    int* b = &a[0];
//    int* c = a + 1;
//    int** d = &c;
//    //printf("%p %p\n", c, &a[1]);
//
//    func1(b, d);
//    printf("a[0] = %d   a[1] = %d\n", a[0], a[1]);
//
//    return 0;
//}


//Ұָ��
//1ָ��δ��ʼ��

//int main()
//{
//	//int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//	return 0;
//}

//2ָ��Խ�����
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}
//	//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//	return 0;
//}

//3ָ��ָ����ڴ�ռ��ͷ�
//int* test()
//{
//	int a = 10;
//	return &a;  //������ʱ�����ĵ�ַ����������ģ����ǲ�����
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//����Ұָ��
//1ָ���ʼ��
//С��ָ��Խ��
//ָ��ָ��ռ��ͷż�ʱ��Ϊnull
//ָ��ʹ��֮ǰ�����Ч��