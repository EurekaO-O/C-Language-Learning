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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//例如求最大值的函数
int getMax(int a, int b) {
	return a > b ? a : b;
}
//例如交换两个变量的函数
void swap1(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
}
void swap2(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void main() {
	int a = 10, b = 20;

	printf("最大值：%d\n",getMax(a,b));
	putchar('\n');

	//当交换两个变量值的时候，不能直接传递变量，需要传递地址
	//如果传递
	printf("交换前：%d %d\n",a,b);
	//原因：主函数中定义了ab,开辟了空间，拥有了内存地址，但swap1函
	//		数中的形参又重新开辟了内存，拥有了另外的地址。地址不同
	//swap1(a,b);//交换失败

	//原因：主函数中定义了ab,开辟了空间，拥有了内存地址,swap2函
	//		数中的形参是指针变量，实参传递的也是同一个内存地址，
	//		就可以通过指针找到主函数中的内存地址，并修改变量的值
	swap2(&a,&b);//交换成功
	printf("交换后：%d %d",a,b);
}