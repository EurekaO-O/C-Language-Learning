/*==================================================第一个C语言程序==================================================*/

//开始编写代码
//1.编写主函数（main函数）

//.c:源文件   .h:头文件
//一个工程中有且只能有一个main函数
//1.一个工程可以有多个.c文件
//2.但是多个.c文件中只能有一个main函数

//如何执行？C语言是从主函数的第一行开始执行
//所以C语言代码中需要有main函数即入口

//#include <stdio.h>
//int:函数返回值类型 main:函数名称
//int main()
//{
//	//函数体
//	//printf:库函数 用于打印数据（需要引用头文件 stdio.h）
//	printf("hello world!");
//	return 0;
//}

//编译+链接+运行 快捷键:Ctrl+F5 也可以在菜单栏中运行

//Visual Studio2013需要设置属性才能看到打印结果 步骤如下：
//右键项目名-属性-链接器-展开-系统-子系统-切换为控制台即可

/*==================================================数据类型==================================================*/

/*
* char:字符类型
* short:短整型
* int:整形
* long:长整型
* long long:更长的整形
* float:单精度浮点数
* double:双精度浮点数
*/

//#include <stdio.h>
//int main()
//{
//	//char
//	char c = 'a';
//	//short
//	short s = 10;
//	//int
//	int i = 20;
//	//long 
//	long l = 30;
//	//long long
//	long long ll = 40;
//	//float
//	float f = 1.2;
//	//double
//	double d = 2.3;
//
//	//各数据类型占的空间 
//	//\n:换行 %d:表示打印的是整形 %lf:表示打印的是浮点数
//	//sizeof():判断数据类型或者表达式的大小 关键字/操作符 结果为字节单位
//	printf("char:%d\n",sizeof(char));
//	printf("short:%d\n",sizeof(short));
//	printf("int:%d\n",sizeof(int));
//	printf("long:%d\n",sizeof(long));
//	printf("long long:%d\n",sizeof(long long));
//	printf("float:%d\n",sizeof(float));
//	printf("double:%d\n",sizeof(double));
//
//	return 0;
//
//}

/*==================================================变量/常量==================================================*/
//变量：可以改变的量（年龄、工资、体重身高等）
//常量：不能改变的量（圆周率、血型等）

/*----------------------------定义变量的语法---------------------------*/

//#include <stdio.h>
//int main()
//{
//	//1.类型 变量名 = 值;
//	//2.类型 变量名;（不推荐
//  //3.类型 变量名 = 值 , 变量名 = 值;（不推荐
//	int age = 17;
//	//int age1;
//  //int a = 0, b = 0, sum = 0;
//	double weight = 54.4;
//	age++;
//	weight--;
//	/*
//	* %d:整形
//	* %f:float
//	* %lf:double
//	*/
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}

/*------------------------局部变量、全局变量-------------------------*/

//#include <stdio.h>
////在函数体外的变量为全局变量
//int a = 2;
//int main()
//{
//	//在函数体内的变量为局部变量
//	int a = 1;
//	printf("%d",a);
//	//tip:当全局变量和局部变量同名时，局部优先
//	return 0;
//}

/*----------------------------求两数之和---------------------------*/
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int a = 0, b = 0, sum = 0;
	//scanf:函数用于输入数据
	//tip:使用scanf函数时会报错
	//解决方法:在第一行加上 #define _CRT_SECURE_NO_WARNINGS 或使用scanf_s函数
	//不推荐使用scanf_s函数，因为scanf_s是vs编译器提供的函数，在其他编译器上有可能报错
	scanf("%d %d",&a,&b);
	sum = a + b;
	printf("sum = %d",sum);
	return 0;
}

/*==================================================Day01结束==================================================*/