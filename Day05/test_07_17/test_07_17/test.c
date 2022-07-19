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

/*------------------------自定义函数函数------------------------*/
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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
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
//方案2：
//int* Binary(int* arr, int arrlen, int input) {
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

//老师讲得：：
//int Binary(int arr[], int arrlen, int input) {
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
//	return -1;
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
//	printf("您要查询数的下标:%d",Binary(arr,arrlen,input));
//}

//函数返回数组的方法：
//int* function(int* a) {
//	a[0] = 1;
//	a[1] = 2;
//	a[2] = 3;
//	return a;
//}
//int main() {
//	int a[10];
//	int* b;
//	b = function(a);
//	for (int i = 0; i < 3;i++) {
//		printf("%d ",b[i]);
//	}
//}

//问题代码！！！！！！！！！！！！！！！！！！！！！！！！！！
//int* test() {
//	int a[3];
//	a[0] = 1;
//	a[1] = 2;
//	a[2] = 3;
//	return a;
//}
//void main() {
//	int * a = test();
//	printf("%d %d %d", a[0], a[1], a[2]);
//	putchar('\n');
//	for (int i = 0; i < 3;i++) {
//		printf("%d ",a[i]);
//	}
//}
