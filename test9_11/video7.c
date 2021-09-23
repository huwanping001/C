#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//while 循环

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
//	printf("请输入密码:>");
//	scanf("%s", password);//123456
//	//gets
//	printf("请确认密码(Y/N):>"); 
//
//	//清理缓冲区
//	//getchar();//处理'\n'
//	// 
//	//清理缓冲区的中多个字符
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
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
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
//	int i = 1;//初始化
//
//	while (i <= 10)//判断部分
//	{
//		printf("%d ", i);
//		i++;//调整部分
//	}
//
//	return 0;
//}



//for循环

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
//前闭后开
//不可再for循环内部改变变量，防止出错

//for 循环初始化、调整、判断都可以省略
//for 循环判断部分被省略，则判断条件恒为真
//建议不要随便省略


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

//循环体内改变循环变量的例子
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


//两个循环变量
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++){
//		printf("小胡\n");
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

//循环0次


//do---while循环 至少被执行一次
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

//计算n的阶乘

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



//计算1！+2！+3！...+10!
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


//改进一个循环
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



//找数组中的某个数，并输出下标；
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

//在一个有序数组中查找具体的某个数字n, 

//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		if (k == arr[i]) {
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//
//	return 0;
//}



//二分查找算法

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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right) {
//		printf("找不到了\n");
//	}
//	return 0;
//}


//编写代码，演示多个字符从两端移动，向中间汇聚
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
//		//休息一秒；
//		Sleep(1000);
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("% s\n", arr2);
//	return 0;
//}


//密码
//int main()
//{
//	int i = 0;
//	//假设正确的密码是字符串"123456"
//
//	char password[20] = { 0 };
//	//abcdef
//	//abccqqqqqq
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//if (password == "123456")//err - 两个字符串比较，不能使用==，应该使用strcmp
//		if(strcmp(password, "123456") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入！\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出程序\n");
//
//	return 0;
//}