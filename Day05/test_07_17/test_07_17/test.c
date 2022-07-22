/*================================函 数================================*/

/*------------------------库函数------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//void main(){
//	/*
//	* strcpy(param1, param2) :复制字符串
//	* param1:目的地    param2:原资源
//	*/
//	//char arr1[20];
//	//char arr2[20] = "hello world";
//	//strcpy(arr1,arr2);
//	//printf("%s",arr1);//hello world
//
//	/*
//	* memset(param1, param2, param3) :将param1指向的内存的前param3个字节设置为param2
//	* param1:原资源
//	* param2:修改后的字符 
//	* param3:前param3个字节
//	*/
//	//char arr1[20] = "hello world";
//	//memset(arr1,'*',5);
//	//printf("%s",arr1);//***** world
//}

/*--------------------自定义函数函数--------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////例如求最大值的函数
//int getMax(int a, int b) {
//	return a > b ? a : b;
//}
////例如交换两个变量的函数
//void swap1(int a, int b) {
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void swap2(int* a, int* b) {
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void main() {
//	int a = 10, b = 20;
//	//当交换两个变量值的时候，不能直接传递变量，需要传递地址
//	//如果传递
//	printf("交换前：%d %d\n",a,b);
//	//原因：主函数中定义了ab,开辟了空间，拥有了内存地址，但swap1函
//	//		数中的形参又重新开辟了内存，拥有了另外的地址。地址不同
//	//swap1(a,b);//传值调用，交换失败
//
//	//原因：主函数中定义了ab,开辟了空间，拥有了内存地址,swap2函
//	//		数中的形参是指针变量，实参传递的也是同一个内存地址，
//	//		就可以通过指针找到主函数中的内存地址，并修改变量的值
//	swap2(&a,&b);//传址调用，交换成功
//	printf("交换后：%d %d",a,b);
//}

/*------------------------练习------------------------*/
/*
* 1. 写一个函数可以判断一个数是不是素数
* 2. 写一个函数判断一年是不是闰年
* 3. 写一个函数，实现一个整形有序数组的二分查找
* 4. 写一个函数，每调用一次这个函数，就会将 num 的值增加1
*/
//1. 写一个函数可以判断一个数是不是素数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//int isPrime(int a) {
//	int i;
//	//2->n-1
//	for (i = 2; i <= sqrt(a); i+=2) {
//		if (a % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//void main() {
//	int a;
//	printf("请输入一个整数：");
//	scanf("%d",&a);
//	printf("%s", isPrime(a) ? "素数" : "不是素数");
//}

//2. 写一个函数判断一年是不是闰年
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int isLeap(int a) {
//	return (a % 100 != 0 && a % 4 == 0 || a % 400 == 0);
//}
//void main() {
//	int input;
//	printf("请输入年份：");
//	scanf("%d", &input);
//	printf("%s", isLeap(input) ? "闰年" : "不是闰年");
//}

//3. 写一个函数，实现一个整形有序数组的二分查找
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//方案1：
//int* Binary(int * arr,int arrlen,int input) {
//	int result[2];
//	int left = 0;
//	int right = arrlen - 1;
//	int mid;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (arr[mid] < input) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > input) {
//			right = mid - 1;
//		}
//		else {
//			result[0] = arr[mid];
//			result[1] = mid;
//			return result;
//		}
//	}
//	return 0;
//}
//void main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int arrlen = sizeof(arr) / sizeof(arr[0]);
//	printf("原数组:");
//	for (int i = 0; i < arrlen;i++) printf("%d ", arr[i]);
//
//	int input;
//	printf("\n请输入您要查询的数：");
//	scanf("%d", &input);
//	int * result = Binary(arr,arrlen,input);
//	printf("您要查询的数:%d下标:%d", result[0], result[1]);
//}
// 
//方案2：
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////arr[]:本质上是指针变量，指向实参数组的首地址
//int* Binary(int arr[], int arrlen, int input) {
//	int left = 0;
//	int right = arrlen - 1;
//	int mid;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (arr[mid] < input) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > input) {
//			right = mid - 1;
//		}
//		else {
//			arr[0] = arr[mid];
//			arr[1] = mid;
//			return arr;
//		}
//	}
//	return 0;
//}
//void main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arrlen = sizeof(arr) / sizeof(arr[0]);
//	printf("原数组:");
//	for (int i = 0; i < arrlen; i++) printf("%d ", arr[i]);
//
//	int input;
//	printf("\n请输入您要查询的数：");
//	scanf("%d", &input);
//	int* result = Binary(arr, arrlen, input);
//	printf("您要查询的数:%d下标:%d", result[0], result[1]);
//}

//老师讲的：：
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int Binary(int arr[],int arrlen, int input) {
//	//int arrlen = sizeof(arr) / sizeof(arr[0]);Error原因如下：
//	//数组在传参时只会传递首地址
//	int left = 0;
//	int right = arrlen - 1;
//	int mid;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (arr[mid] < input) {
//			left = mid + 1;
//		}
//		else if (arr[mid] > input) {
//			right = mid - 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	return - 1;
//}
//void main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arrlen = sizeof(arr) / sizeof(arr[0]);
//	printf("原数组:");
//	for (int i = 0; i < arrlen; i++) printf("%d ", arr[i]);
//
//	int input;
//	printf("\n请输入您要查询的数：");
//	scanf("%d", &input);
//	int result = Binary(&arr, arrlen,input);
//	if (result != -1) {
//		printf("您要查找的数的下标为：%d",result);
//	}
//	else printf("抱歉没有找到您要查找的元素");
//}

//4. 写一个函数，每调用一次这个函数，就会将 num 的值增加1
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void addone(int* pi) {
//	(*pi)++;
//}
//void main() {
//	int input;
//	printf("请输入一个整数：");
//	scanf("%d",&input);
//
//	addone(&input);
//	printf("result = %d\n", input);//1
//
//	addone(&input);
//	printf("result = %d\n", input);//2
//
//	addone(&input);
//	printf("result = %d\n", input);//3
//}

/*================================函数的嵌套调用和链式访问================================*/
/*------------------------嵌套调用------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void test2() {
//	printf("hehe\n");
//}
//void test1() {
//	test2();
//}
//void main() {
//	test1();//hehe
// //函数可以嵌套，但不能嵌套定义
//}

/*------------------------链式访问------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//void main() {
//	//int len = strlen("abc");
//	//printf("%d\n", len);//3
//	//链式访问：把一个函数的返回值作为另一个函数的参数
//	//printf("%d\n", strlen("abc"));
//	//printf():返回打印字符的个数 注：\n也算个字符
//	printf("%d\n",printf("%d\n",printf("%d\n",100)));//100 4 2
//}

/*================================函数的声明和定义================================*/
/*------------------------函数声明------------------------*/
/*
* 1. 告诉编译器有一个函数、参数、返回类型是什么，但是具体是
*    不是存在，函数声明决定不了
* 2. 函数的声明一般出现在函数的使用之前。要满足先声明后使用
* 3. 函数的声明一般要放在头文件中的
*/

/*------------------------函数定义------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	//函数的定义是指函数的实现，具体的函数功能的实现
//	int a = 10, b = 20;
//	//函数声明，但这种用法很少
//	//一般用头文件声明，源文件实现
//	int Add(int,int);
//	printf("%d", Add(a, b));
//}
//int Add(int a, int b) {
//	return a + b;
//}
//头文件声明，源文件实现的代码
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include "calculator.h"
//void main() {
//	int a = 10, b = 20;
//	printf("%d\n",Add(a,b));//30
//	printf("%d\n",Sub(a,b));//-10
//	printf("%d\n",Mul(a,b));//200
//	printf("%d\n",Div(a,b));//0
//}
//头文件，但使用lib实现
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////引入静态库
//#pragma comment(lib,"calculator.lib")
//void main() {
//	int a = 10, b = 20;
//	printf("%d\n", Add(a, b));//30
//	printf("%d\n", Sub(a, b));//-10
//	printf("%d\n", Mul(a, b));//200
//	printf("%d\n", Div(a, b));//0
//}

/*================================函数递归================================*/
/*------------------------练习1------------------------*/
//接受一个整型值（无符号），按照顺序打印它的每一位。例如：输入：1234，输出 1 2 3 4
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void print(unsigned int input) {
//	if (input > 9) {
//		print(input / 10);
//	}
//	printf("%d ",input % 10);
//}
//void main() {
//	unsigned int input;
//	printf("请输入：");
//	scanf("%u",&input);//1234
//	print(input);
//}
/*------------------------练习2------------------------*/
//编写函数不允许创建临时变量，求字符串的长度
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int myStrlen2(char* arr) {
//	int len = 0;
//	while (*arr != '\0') {
//		arr++;
//		len++;
//	}
//	return len;
//}
//int myStrlen1(char * arr) {
//	if (*arr != '\0') {
//		return 1 + myStrlen1(str + 1);
//	}
//	else return 0;
//}
//void main() {
//	char arr[] = "abc";
//	printf("%d",myStrlen(arr));
//}
/*------------------------递归与迭代------------------------*/
//练习1
//求n的阶乘,使用递归（不考虑溢出）
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int Fac(int num) {
//	if (num <= 1) {
//		return 1;
//	}
//	else return num * Fac(num-1);
//}
//void main() {
//	int input;
//	printf("请输入：");
//	scanf("%d",&input);
//	printf("%d",Fac(input));
//}

//练习2
//求第n个斐波那契数（不考虑溢出）
//1 1 2 3 5 8 13 21 34 55...即前两项之和
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////用递归虽然代码简单，但效率慢
//int Fib(int num) {
//	if (num <= 2) {
//		return 1;
//	}
//	else return Fib(num - 1) + Fib(num - 2);
//
//}
////有些情况用非递归写更好
//int Fib(int num) {
//	int a = 1, b = 1, c = 1;
//	while (num > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		num--;
//	}
//	return c;
//}
//void main() {
//	int input;
//	printf("请输入：");
//	scanf("%d", &input);
//	printf("%d", Fib(input));
//}
//作业：汉诺塔
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void move(char a,char c,int n) {
//	printf("把第%d个圆盘从%c ---> %c\n",n,a,c);
//}
//void Hanoi(char a,char b,char c,int n) {
//	if (n != 1) {
//		Hanoi(a, c, b, n - 1);
//		move(a, c, n);
//		Hanoi(b, a, c, n - 1);
//	}
//	else {
//		move(a, c, n);
//	}
//}
//void main() {
//	int n = 0;
//	printf("请输入汉诺塔的盘子数:");
//	scanf("%d",&n);
//	Hanoi('a','b','c',n);
//	return 0;
//}

/*================================Day05结束================================*/

/*================================函数作业================================*/
//1.判断100~200之间的素数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//void main() {
//	int j;
//	for (int i = 101; i <= 200;i+=2) {
//		int sqrti = (int)sqrt(i);
//		for (j = 2; j <= i ;j++) {
//			if (i % j == 0) break;
//		}
//		if (i == j) {
//			printf("素数：%d\n",i);
//		}
//	}
//}

//2.判断闰年（能被4整除，不能被100整除，能被400整除）
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//char* leapYear(int year) {
//	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?"闰年":"不是闰年";
//}
//void main() {
//	printf("请输入年份：");
//	int year;
//	scanf("%d",&year);
//	char* result = leapYear(year);
//	printf("%s ", result);
//}

//3.实现一个函数来交换两个整数的内容
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void swap(int* a,int* b) {
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void main() {
//	printf("请输入两个数，用空格隔开：");
//	int a, b;
//	scanf("%d %d",&a,&b);
//	swap(&a, &b);
//	printf("a=%d,b=%d", a,b);
//}

//4.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void MulTable(int num) {
//	for (int i = 1; i <= num; i++) {
//		for (int j = 1; j <= i;j++) {
//			//%-2d:十位数向左对齐
//			printf("%d×%d=%-2d ",j,i,i*j);
//		}
//		putchar('\n');
//	}
//}
//void main() {
//	printf("请输入：");
//	int num;
//	scanf("%d", &num);
//	MulTable(num);
//}

//5.递归方式实现打印一个整数的每一位
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void Per(int num) {
//	if (num > 9) {
//		Per(num / 10);
//	}
//	printf("%d ",num % 10);
//}
//void main() {
//	printf("请输入：");
//	int num;
//	scanf("%d", &num);
//	Per(num);
//}

//6.递归和非递归分别实现求n的阶乘(不考虑溢出的问题)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int Fac1(int num) {
//	if (num <= 1) {
//		return 1;
//	}
//	return num * Fac1(num - 1);
//}
//int Fac2(int num) {
//	int fac = 1;
//	for (int i = 1; i <= num;i++) {
//		fac *= i;
//	}
//	return fac;
//}
//void main() {
//	printf("请输入：");
//	int num;
//	scanf("%d", &num);
//	printf("%d的阶乘是%d\n",num, Fac1(num));
//	printf("%d的阶乘是%d\n",num, Fac2(num));
//}

//7.递归和非递归分别实现求n的阶乘(不考虑溢出的问题)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void ReverseStr(char str[]) {
	if () {
	
	}
	ReverseStr(str);
	printf("%c",str);
}
void main() {
	printf("请输入：");
	char str[4];
	scanf("%s", str);
	ReverseStr(num);
	//printf("%c",str[3]);
}