#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����

//һά����Ĵ����ͳ�ʼ��
//#include<string.h>
//int main()
//{
//	//[]�����ʹ�ó���
//	//int arr[10] = { 1, 2, 3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//char arr2[5] = { 'a', 'b' };
//	//char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//
//	printf("%d\n", sizeof(arr4)); //sizeof�Ǽ���arr4��ռ�ռ��С 7��Ԫ�� - char 7*1 = 7;//7
//	printf("%d\n", strlen(arr4)); //strlen���ַ�������-'\0'֮ǰ���ַ�����//6
//
//	return 0;
//}

//1.strlen ��sizeof û��ʲô����
//2.strlen �����ַ������ȵ�-ֻ������ַ����󳤶� - �⺯��-ʹ�õ���ͷ�ļ�
//3.������������顢���͵ô�С-��λ���ֽ�-������


//#include<string.h>
//int main() {
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	printf("%d\n", sizeof(arr1));//4
//	printf("%d\n", sizeof(arr2));//3
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//15 ���ֵ
//	return 0;
//}

//����ͨ���±�������
//int main()
//{
//
//	//char arr[] = "abcdef"; //[a][b][c][d][e][f][\0];
//	////printf("%c\n",arr[3]);
//	//int i = 0;
//	//for (i = 0; i < strlen(arr); i++) {
//	//	printf("%c ", arr[i]);
//	//}
//
////	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	int i = 0;
////	for (i = 0; i < sz; i++) 
////	{ 
////		printf("%d ", arr[i]);
////	}
////	return 0;
////}


//�������ڴ�����������ŵ�  
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}


//��ά����
//�п���ʡ�ԣ��в�����ʡ��
//int main() {
//	int arr[3][4] = { 1, 2, 3, 4, 5 };
//	int arr1[3][4] = { {1, 2, 3,}, 4, 5 };
//	int arr2[][4] = { 1, 2, 3, 4, 5, 6, 7,8 };
//	//char ch[3][5];
//	return 0;
//}


//��ά����ķ���
//int main() {
//	int arr[3][4] = { {1, 2, 3},{4, 5} };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 4; j++) {
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//��ά�������ڴ��еĴ洢
//int main() {
//	int arr[3][4] = { {1, 2, 3},{4, 5} };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int j = 0;
//		for (j = 0; j < 4; j++) {
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//ð��������
//
//int bubble_sort(int arr[],int sz) 
//{
//	
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int flag = 1;  //������һ��Ҫ����������Ѿ�����
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1]) 
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1) {
//			break;
//		}
//	}
//	
//}
//
//int main() {
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	//��arr���������ų�һ������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ &arr[0]
//	bubble_sort(arr,sz);//ð��������
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//����������Ԫ�ص�ַ(1,2���⣩

//int main() {
//	int arr[] = { 1, 2, 3, 4, 5 };
//
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//1.sizeof(������)-��������ʾ�������飬sizeof(�����������������������Ĵ�С����λ���ֽ�
//	//2.&������ �������������������飬&��������ȡ��������������ĵ�ַ
//
//	printf("%p\n", arr);//��Ԫ�ص�ַ
//	printf("%p\n", &arr[0]);//��Ԫ�ص�ַ
//	printf("%d\n", *arr);
//	printf("%p\n", &arr);//����ĵ�ַ
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr+1);
//	//����ĵ�ַ��������Ԫ�ص�ַ��ͬ������������ȫ��ͬ
//
//	return 0;
//}