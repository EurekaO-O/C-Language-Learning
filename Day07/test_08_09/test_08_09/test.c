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
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	/*
//	* << 左移运算符
//	* 规则:左边抛弃，右边补0
//	*/
//	int a1 = 3;
//	//当a1为正数时
//	//原码=反码=补码 所以直接左移一位即可
//	printf("a1 = %d\n", a1 << 1);//6
//	int a2 = -4;
//	//当a2为负数时
//	//原码转补码然后左移一位，再转回原码
//	printf("a2 = %d\n", a2 << 1);//-8
//
//	/*
//	* >> 右移运算符
//	* 规则：
//	*	1.算术右移:左边用原舍弃的符号位填充，右边舍弃
//	*	2.逻辑右移:左边补0，右边舍弃
//	*/
//	int b1 = 5;
//	printf("b1 = %d\n", b1 >> 1);//2
//	int b2 = -3;
//	printf("b2 = %d\n", b2 >> 1);//-2
//
//	//int e = 2;
//	//printf("e = %d\n",e << -2);//error
//}

/*---------------- 位运算符 ----------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	//&:按(二进制)与。同为1才为1
//	int a1 = 2, b1 = 6;
//	//为正整数时，原、反、补一致
//	//a1:		  00000000000000000000000000000010
//	//b1:		  00000000000000000000000000000110
//	//a1&b1:	  00000000000000000000000000000010
//	printf("a1 & b1 = %d\n",a1 & b1);//2
//	int a_1 = -2, b_1 = -6;
//	//为负整数时，原、反、补不一致
//	//补码a_1:    11111111111111111111111111111110
//	//补码b_1:    11111111111111111111111111111010
//	//a_1&b_1补码:11111111111111111111111111111010
//	//a_1&b_1反码:10000000000000000000000000000101
//	//a_1&b_1原码:10000000000000000000000000000110
//	printf("a_1 & b_1 = %d\n", a_1 & b_1);//-6
//
//	//|:按(二进制)或。任意一位为1，结果就为1
//	int a2 = 3, b2 = 2;
//	//a2:		  00000000000000000000000000000011
//	//b2:		  00000000000000000000000000000010
//	//a2&b2:	  00000000000000000000000000000011
//	printf("a2 | b2 = %d\n",a2 | b2);//3
//
//	//^:按(二进制)异或。相同为0，相异为1
//	int a3 = 6, b3 = 5;
//	//a3:		  00000000000000000000000000000110
//	//b3:		  00000000000000000000000000000101
//	//a3&b3:	  00000000000000000000000000000011
//	printf("a3 ^ b3 = %d\n",a3 ^ b3);//3
//}
/*---------------- 面试题：不能使用临时变量，交换两个数 ----------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	//方法1：缺点（如果是两个较大的数会存在溢出问题）
//	//int a = 2, b = 5;
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//	//printf("a = %d,b = %d\n",a,b);
//	//方法2：通过异或运算符（推荐）
//	int a = 2, b = 5;
//	//a:		  00000000000000000000000000000010
//	//b:		  00000000000000000000000000000101
//	a = a ^ b;
//	//a:		  00000000000000000000000000000111
//	b = a ^ b;
//	//b:		  00000000000000000000000000000010
//	a = a ^ b;
//	//a:		  00000000000000000000000000000101
//	printf("a = %d,b = %d\n",a,b);
//}
/*---------------- 求一个整数存储在内存中的二进制中1的个数 ----------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	int num = 0;
//	printf("请输入：");
//	scanf("%d",&num);
//	int count = 0;
//	for (int i = 0; i < 32; i++) {
//		if (1 & (num >> i)) {
//			count++;
//		}
//	}
//	printf("%d出现了%d次\n",num,count);
//}

/*---------------- 赋值运算符 ----------------*/
/*
* 赋值运算符分为两类：
* 1.赋值运算符(=)
* 2.复合赋值符(+= -= *= /= %= >>= <<= &= |= ^=)
*/
//1.赋值运算符(=)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	int age = 30;//年龄
//	int a = 3;
//	int b = 0;
//	printf("age = %d\n",age);//30
//	age = 18;//不满意可以重新赋值
//	printf("age = %d\n", age);//18
//	b = a = age + 2;//连续赋值
//	printf("b = %d\n", b);//20
//}
//2.复合赋值符(+= -= *= /= %= >>= <<= &= |= ^=)
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	// +=
//	//int a = 100;
//	//a = a + 10;//110
//	//printf("%d\n", a);
//	//a = 100;
//	//a += 10;//110
//	//printf("%d\n", a);//a += 10 和 a = a + 10 相同
//
//	// -=
//	//int a = 100;
//	//a = a - 10;//90
//	//printf("%d\n",a);
//	//a = 100;
//	//a -= 10;//90
//	//printf("%d\n", a);
//
//	// *=
//	//int a = 100;
//	//a = a * 2;//200
//	//printf("%d\n",a);
//	//a = 100;
//	//a *= 2;//200
//	//printf("%d\n", a);
//
//	// /=
//	//int a = 100;
//	//a = a / 2;//50
//	//printf("%d\n",a);
//	//a = 100;
//	//a /= 2;//50
//	//printf("%d\n", a);
//
//	// %=
//	//int a = 100;
//	//a = a % 3;//1
//	//printf("%d\n", a);
//	//a = 100;
//	//a %= 3;//1
//	//printf("%d\n", a);
//
//	// >>=
//	//int a = 8;
//	//a = a >> 3;//1
//	//printf("%d\n", a);
//	//a = 8;
//	//a >>= 3;//1
//	//printf("%d\n", a);
//
//	// &=
//	//int a = 5;
//	//a = a & 3;//1
//	//printf("%d\n", a);
//	//a = 5;
//	//a &= 3;//1
//	//printf("%d\n", a);
//
//}

/*---------------- 单目运算符 ----------------*/
/*
* !逻辑反操作
* - 负值
* + 正值
* & 取地址
* sizeof      操作数的类型长度（以字节为单位）
* ~对一个数的二进制按位取反
* --前置、后置--
* ++前置、后置++
* * 间接访问操作符(解引用操作符)
* (类型)强制类型转
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	// !逻辑反操作
//	//int a = 1;
//	//printf("%d\n",a);//1
//	//printf("%d\n",!a);//0
//
//	//-负值
//	//int a = 1;
//	//printf("%d\n",-a);//-1
//
//	//+ 正值
//	//int a = 1;
//	//printf("%d\n",+a);//1 一般省略
//
//	//& 取地址
//	//int a = 1;
//	//printf("%p\n",&a);//a的内存地址
//
//	//sizeof      操作数的类型长度（以字节为单位）
//	//short a = 5;
//	//int b = 2;
//	////当使用sizeof关键字时数据会被截断不会丢失
//	//printf("%d\n",sizeof(a = b + 1));//2 
//	//printf("%d\n",a);//5 sizeof中的表达式是不参与运算的
//
//	//~对一个数的二进制按位取反
//	//int a = -3;
//	////原码： 10000000000000000000000000000011
//	////反码： 11111111111111111111111111111100
//	////补码： 11111111111111111111111111111101
//	////~取反：00000000000000000000000000000010
//	//printf("%d\n",~a);//2
//
//	//--/++前置、后置--/++
//	//int a = 10;
//	//int b = a++;
//	//printf("a = %d,b = %d\n",a,b);//11 10
//	//int c = ++b;
//	//printf("b = %d,c = %d\n", b, c);//11 11
//
//	//* 间接访问操作符(解引用操作符)
//	//int a = 10;
//	//printf("%d\n",a);//10
//	///*
//	//* int* pa:int类型的指针变量用来存储内存地址
//	//*		  可以通过*pa找到内存地址对应的变量
//	//*/
//	//int* pa = &a;
//	//*pa = 20;//
//	//printf("%d\n", a);//20
//
//	//(类型)强制类型转
//	//int a = 3.14;//warning
//	//
//	/*
//	* warning C4244 :“初始化”: 从“double”转
//	*				 换到“int”，可能丢失数据
//	* 原因:3.14默认类型是double(8字节)，所以赋
//	*	   值给int(4字节)会丢失小数并报警告
//	* 不想看到警告可以使用强制类型转换
//	*/
//	//int a = (int)3.14;
//	//printf("%d\n",a);//3
//
//}

/*---------------- 关系运算符 ----------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	//太简单没什么写的
//}

/*---------------- 逻辑运算符 ----------------*/
/*
* 逻辑运算符:&& (逻辑与)
*			 || (逻辑或)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main() {
	//&& 逻辑与:同为真为真,任意一个为假,结果为假
	//int a = 1;
	//int b = 1;
	//if (a && b) {
	//	printf("为真");//输出
	//}
	//else printf("为假");

	//|| 逻辑或:同为真为真,任意一个为真,结果为真
	//int a = 1;
	//int b = 0;
	//if (a || b) {
	//	printf("为真");//输出
	//}
	//else printf("为假");

	/*
	* 注意:区分逻辑与和按位与
	*	   区分逻辑或和按位或
	* 1 & 2  ——— 0
	* 1 && 2 ——— 1
	* 
	* 1 | 2  ——— 3
	* 1 || 2 ——— 1
	*/

	//&& 和 || 是短路运算符(短路运算符只会运算一半)
	//int a = 0;
	//int b = 1;
	////int i = a++ && b++;
	////原因：当a=0时,&&就不继续运算后面的表达式了,直接把0赋给i,b没有参与运算
	////printf("a = %d,b = %d,i = %\n", a, b, i);//a=1 b=1 i=0
	//int i = a++ || b++;
	////原因：当a为假时,||继续运算,因为b是有可能为真,当b为真时++,结果为1,赋给i
	//printf("a = %d,b = %d,i = %d\n", a, b, i);//a=1 b=2 i=1

	//360笔试题
	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;
	////i = a++||++b||d++;
	//printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);//1 2 3 4

	//int i = 0, a = 0, b = 2, c = 3, d = 4;
	////i = a++ && ++b && d++;
	//i = a++ || ++b || d++;
	//printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);//1 3 3 4
}