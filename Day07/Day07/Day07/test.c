/*================================ 运算符详解 ================================*/

/*---------------- 算数运算符 ----------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	//+    -   *   /   %
//	int a = 1, b = 2;
//	printf("%d\n",a + b);//3
//	printf("%d\n",a - b);//-1
//	printf("%d\n",a * b);//2
//	
//	int c = 5, d = 2;
//	printf("%d\n", c / d);//2
//	//如果需要小数位则需要用浮点数接受，且必须任意一位数为浮点数
//	float f = 5.0f / 2.0f;//不带f默认double类型
//	printf("%f\n",f);//2.5
//
//	//float e = 10 % 3.0;//error  % 运算符的两个数必须为整数。返回的是整除之后的余数
//	int e = 10 % 3;//error  % 运算符的两个数必须为整数。返回的是整除之后的余数
//	printf("%d",e);//1
//}

/*---------------- 移位运算符 ----------------*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	// << 左移运算符
	// >> 右移运算符
	int a = 1;
	printf("a = %d\n",a << 1);//2
	int b = 10;
	printf("a = %d\n", b >> 1);//5
}