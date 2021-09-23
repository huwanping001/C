#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//    int var = 20;   /* 实际变量的声明 此时的 VAR 这个变量是存在某个地址的，地址对应某个内存单元，该单元中存储了数据20 */
//    int* ip;         /* 指针变量的声明 定义了一个指针 即一个内存单元的地址变量 */
//
//    ip = &var;      /* 在指针变量中存储 var 的地址 就是将地址值赋值给指针这个变量*/
//
//    /* 在指针变量中存储的地址 利用&符号直接输出了var所存储的数据的内存单元的地址*/
//    printf("Address of var variable: %p\n", &var);
//
//    /* 在指针变量中存储的地址 ip代表的是这个赋值到的地址的值 所以输出的是地址值 */
//    printf("Address stored in ip variable: %p\n", ip);
//
//    /* 使用指针访问值 *ip代表的是定义到这个内存单元之后，内存单元中所存储的数据的值也就是将20赋值给var中20这个值 */
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
//    printf("输入一个数字\n");
//    scanf("%d", p);
//    printf("%d\n", *p);
//    return 0;
//}



//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//int* p; *p能够访问4个字节
//char* p; *p能够访问1个字节
//double* p; *p能够访问8个字节

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


//指针类型决定了：指针走一步走多远（指针步长）
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
//	int* p = arr;//数组名-首元素地址
//	//char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


//地址传递，地址值
//void func1(int* a, int** b);
//
//void func1(int* a, int** b)
//{
//    (*a)++;//地址解引用得到10----等同10++
//    (*b)++;//这里虽然传进来的是指针的形式，但其实是指针c的地址，
//           //可以认为这里本质还是值传递，只不过这个值是地址值
//           //c的地址加加
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


//野指针
//1指针未初始化

//int main()
//{
//	//int a;//局部变量不初始化，默认是随机值
//	int* p;//局部的指针变量，就被初始化随机值
//	return 0;
//}

//2指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}
//	//当指针指向的范围超出数组arr的范围时，p就是野指针
//	return 0;
//}

//3指针指向的内存空间释放
//int* test()
//{
//	int a = 10;
//	return &a;  //返回临时变量的地址都是有问题的，除非不销毁
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//避免野指针
//1指针初始化
//小心指针越界
//指针指向空间释放及时置为null
//指针使用之前检查有效性