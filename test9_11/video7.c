#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//while ѭ��

//int main() {
//	//int ch = 0;
//	//while ((ch = getchar()) != EOF) {
//	//	putchar(ch);
//	//}
//	return 0;
//}



//int main()
//{
//	//
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//123456
//	//gets
//	printf("��ȷ������(Y/N):>"); 
//
//	//��������
//	//getchar();//����'\n'
//	// 
//	//�����������ж���ַ�
//
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	int ch = getchar();
//
//
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	return 0;
//}


//int main() {
//	int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 1;//��ʼ��
//
//	while (i <= 10)//�жϲ���
//	{
//		printf("%d ", i);
//		i++;//��������
//	}
//
//	return 0;
//}



//forѭ��

//int main() {
//	int i = 1;
//	for (i = 1; i <= 10; i++) {
//		if (i == 5)
//			break;
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//	return 0;
//}
// 
// 
//ǰ�պ�
//������forѭ���ڲ��ı��������ֹ����

//for ѭ����ʼ�����������ж϶�����ʡ��
//for ѭ���жϲ��ֱ�ʡ�ԣ����ж�������Ϊ��
//���鲻Ҫ���ʡ��


//int main(){
//	for (;;) {
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main(){ 
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++) {
//		for (j = 0; j < 10; j++) {
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}

//ѭ�����ڸı�ѭ������������
// 
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//		int j = 0;
//		for (j = 0; j < 10; i++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}


//����ѭ������
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++){
//		printf("С��\n");
//	}
//	return 0;
//}

//int main() {
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 1; i++, k++)
//		k++;
//	return 0;
//}

//ѭ��0��


//do---whileѭ�� ���ٱ�ִ��һ��
//
//int main() {
//	int i = 1;
//	do {
//		/*if (i == 5)
//			continue;*/
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//����n�Ľ׳�

//int main() {
//	int n;
//	scanf("%d", &n);
//	int i=1,T=1;
//	for (i = 1; i <= n; i++) {
//		T = T * i;
//	}
//	printf("%d\n", T);
//	return 0;
//}



//����1��+2��+3��...+10!
//int main() {
//	int i = 1, j = 1;
//	int sum = 0;
//	int t = 1;
//	for (i = 1; i <= 3; i++) {
//		t = 1;
//		for (j = 1; j <= i; j++) {
//			t = t * j;
//		}
//		sum = sum + t;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//�Ľ�һ��ѭ��
//int main() {
//	int i = 1;
//	int sum = 0, t = 1;
//	for (i = 1; i <= 10; i++) {
//		t = t * i;
//		sum = sum + t;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//�������е�ĳ������������±ꣻ
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("Input your number:\n");
//	int a = 0;
//	scanf("%d", &a);
//	int l = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < l; i++) {
//		if (arr[i] == a) {
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}

//��һ�����������в��Ҿ����ĳ������n, 

//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		if (k == arr[i]) {
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//
//	return 0;
//}



//���ֲ����㷨

//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//
//	while (left <=  right) {
//
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right) {
//		printf("�Ҳ�����\n");
//	}
//	return 0;
//}


//��д���룬��ʾ����ַ��������ƶ������м���
//#include<stdlib.h>
//#include<string.h>
//#include<Windows.h>
//
//int main() {
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right) 
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("% s\n", arr2);
//		//��Ϣһ�룻
//		Sleep(1000);
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("% s\n", arr2);
//	return 0;
//}


//����
//int main()
//{
//	int i = 0;
//	//������ȷ���������ַ���"123456"
//
//	char password[20] = { 0 };
//	//abcdef
//	//abccqqqqqq
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//if (password == "123456")//err - �����ַ����Ƚϣ�����ʹ��==��Ӧ��ʹ��strcmp
//		if(strcmp(password, "123456") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("��������������룡\n");
//		}
//	}
//	if (i == 3)
//		printf("��������������˳�����\n");
//
//	return 0;
//}