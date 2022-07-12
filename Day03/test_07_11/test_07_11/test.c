/*========================================常见关键字========================================*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	/*
//	* C语言中的关键字：auto(自动创建,自动销毁) break(跳出当前层所有循环) continue(跳出本次的循环继续下次循环)
//	* case(和switch一起用的) char(字符) const(声明常变量) default(默认) goto(语句) if(判断语句) 
//	* do(dowhile循环) double(双精度浮点数) else(if语句不成立的时候执行的) int(整数型) long(长整型) 
//	* enum(枚举) extern(用来声明外部变量) float(单精度浮点数) for(循环)register(希望将修饰的变量放入寄存器中)
//	* short(短整型) return(返回) signed(声明有符号类型的整数类型) unsigned(声明无符号的整数类型)
//	* sizeof(计算类型大小) static(静态) struct(用于声明结构体) switch(switch语句类似if)
//	* typedef(类型重定义) union(联合体/共用体) void(无返回值) volatile(直接存取原始内存地址) while(循环)
//	* 
//	* 1.C语言提供的，不能自己创建关键字
//	* 2.关键字不能做变量名 例如:int auto = 1;//Error
//	*/
//	//{
//	//	//auto:自动创建,自动销毁 --自动变量,一般省略(还有其他用法)
//	//	auto int  i = 0;
//	//	int j = 0;
//	//}
//}

/*----------------------------关键字 typedef----------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////typedef：类型重定义
////将unsigned int 重命名为uint_32, 所以uint_32也是一个类型名
//typedef unsigned int uint_32;
//void main() {
//    //观察num1和num2,这两个变量的类型是一样的
//    unsigned int num1 = 0;
//    uint_32 num2 = 0;
//}

/*----------------------------关键字static----------------------------*/
/*
* static：静态
* 三种使用方式：
* 1.修饰局部变量
* 2.修饰全局变量
* 3.修饰函数
*/
////1.修饰局部变量
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void test() {
//	/*
//	* 1.内存中大致分为三个空间分别是栈堆还有静态区。
//	* 对应存储的数据分别是：局部变量函数的参数，动
//	* 态内存分配，全局变量和静态变量。
//	* 
//	* 2.原本a局部变量是存储在局部变量中的，函数结束
//	* 也就销毁了，但如果用static修饰就会存放在静态区
//	* 中就不会销毁。
//	*/
//	//static：修饰局部变量，将原本存在栈中的数据放到了静态区（改变了存储类型）
//	static int a = 1;
//	a++;
//	printf("%d", a);
//}
//void main() {
//	int i = 0;
//	while (i < 10) {
//		test();
//		i++;
//	}
//	//2~11
//}

////2.修饰全局变量
//#define _crt_secure_no_warnings
//#include <stdio.h>
////此时g_val在add.c中已经被static修饰了
//extern int g_val;
//void main() {
//	/*
//	* 1.static如果修饰全局变量则只能在变量所在的源文件(.c)内部可以使
//	* 用其他源文件不可用。
//	* 
//	* 2.全局变量：在其他源文件中依然可以使用，因为全局变量具有外部链
//	* 接属性但被static修饰后，就变成了内部链接属性，其他源文件就不能
//	* 链接到这个静态的全局变量了
//	*/
//	//printf("%d", g_val);//error:无法解析的外部符号 g_val
//}

////3.修饰函数
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////声明外部函数
//extern int Add(int a, int b);
////此时Add()函数在add.c中已经被static修饰了
//void main() {
//	int a = 10, b = 20;
//	/*
//	* 1.static如果修饰函数则只能在函数所在的源文件(.c)内部可以使
//	* 用其他源文件不可用。
//	*
//	* 2.函数：在其他源文件中依然可以使用，因为函数具有外部链接属
//	* 性但被static修饰后，就变成了内部链接属性，其他源文件就不能
//	* 链接到这个静态的函数了(和全局变量类似)
//	*/
//	printf("%d", Add(a,b));//Error:无法解析的外部符号Add
//}

/*========================================#define 定义常量和宏========================================*/
/*----------------------------定义常量----------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#define MAX 100
//#include <stdio.h>
//void main() {
//	printf("%d",MAX);
//}

/*-----------------------------定义宏-----------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#define ADD1(A,B) ((A)+(B))
//#define ADD2(A,B) A+B
//#include <stdio.h>
//void main() {
//	printf("%d\n",4 * ADD1(1,2));//12
//	printf("%d\n",4 * ADD2(1,2));//6 宏是替换
//	printf("%d\n",4 * (ADD2(1,2)));//12
//}

/*========================================初识指针========================================*/
/*-----------------------------内存-----------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	int i = 10;
//
//	//%p:打印地址，%p是以地址的形式打印
//	//&i:取变量i的内存地址
//	printf("%p",&i);
//	//注：这里num的4个字节，每个字节都有地址，取出的是第一个字节的地址（较小的地址）
//}

/*-------------------------指针变量基本使用-------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	int i = 10;
//	//定义指针变量的语法：类型 * 变量名 = 内存地址
//	int* p = &i;
//	printf("%p\n",p);
//	//通过指针变量修改内存地址对应变量的值
//	*p = 20;
//	printf("%d", i);//20
//}

/*-------------------------指针变量的大小-------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	/*
//	* 1.指针变量的大小取决于内存地址的大小，内存地址的大小取
//	*	决于地址线/物理线，地址线/物理线可以决定是32位还是64
//	*	位
//	*	32根地址线---32位---通电---1/0
//	*	64根地址线---64位---通电---1/0
//	* 2.32位平台下地址是32个bit位（即4个字节）64位平台下地址
//	*	是64个bit位（即8个字节）
//	*/
//	printf("%d\n",sizeof(char*));//8
//	printf("%d\n",sizeof(short*));//8
//	printf("%d\n",sizeof(int*));//8
//	printf("%d\n",sizeof(long*));//8
//	printf("%d\n",sizeof(long long*));//8
//	printf("%d\n",sizeof(float*));//8
//	printf("%d\n",sizeof(double*));//8
//}


/*========================================结构体========================================*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
* 结构体使得C语言有能力描述复杂类型。比如描述学生 学生包含： 名字+年龄+性别+学号
* 学生具有很多信息，不能用单个变量来描述，这里只能使用结构体来描述了。
*/
//例如：定义一个学生结构体
struct Student {
	char name[20];
	int age;
	char sex[5];
	float score;
};
void main() {
	//结构体的创建和初始化
	struct Student stu1 = { "张三",17,"男",99.9};
	//打印结构体成员的三种方式：
	//1.结构体变量名.成员
	printf("1. %s %i %s %f\n", stu1.name, stu1.age, stu1.sex, stu1.score);
	//2.使用指针变量 (*变量名).成员
	struct Student* p_stu1 = &stu1;
	printf("2. %s %i %s %f\n", (*p_stu1).name, (*p_stu1).age, (*p_stu1).sex, (*p_stu1).score);
	//3.使用->
	printf("3. %s %i %s %f\n", p_stu1->name, p_stu1->age, p_stu1->sex, p_stu1->score);
}

/*============================================Day03结束============================================*/