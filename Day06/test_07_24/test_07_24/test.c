/*======================================== 一维数组 ========================================*/
/*------------------------数组的创建------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	//数组创建的方式：类型 数组名[数组长度];
//	//注意：数组长度必须为常量表达式
//	int arr[10];
//	int len = 5;
//	//int error[len];//error
//}

/*------------------------数组的初始化------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//void main() {
//	//数组初始化顾名思义就是在创建数组的同时给数组的内容一些合理初始值
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	//整形数组默认值为0   1234500000
//	int arr2[10] = { 1,2,3,4,5 };//不完全初始化
//	//如果没有指定长度，那么就会根据初始化的元素个数来确定大小
//	int arr3[] = { 1,2,3,4,5 };
//	
//	//字符类型数组默认值为\0
//	char ch1[4] = {'a','b','c'};
//
//	//abc\0
//	char ch2[] = "abc";
//	//abc乱码
//	char ch3[] = {'a','b','c'};
//	printf("%s\n",ch2);//abc
//	printf("%s\n",ch3);//abc乱码
//	printf("%d\n",strlen(ch2));//abc
//	printf("%d",strlen(ch3));//不确定
//
//}

/*------------------------数组的使用------------------------*/
//#include <stdio.h>
//void main() {
//	//数组不完全初始化
//	int arr[10] = {0};
//	//计算数组的元素个数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//数组是通过下标来访问的，下标从0开始
//	int i = 0;//下标
//	//第五个元素赋值为5
//	arr[4] = 5;//[] - 数组下标引用符
//	//输出数组的内容
//	for (i = 0; i < 10;i++) {
//		printf("%d ",arr[i]);
//	}
//}

/*------------------------ 一维数组在内存中的存储 ------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	int arr[10] = {0};//不完全初始化
//	for (int i = 0; i < 10;i++) {
//		//%p;打印地址的格式,十六进制
//		printf("&arr[%d] = %p\n",i,&arr[i]);//&:打印内存地址
//	}
//	/*
//	* 随着数组下标的增长，元素的地址，也在有规律的递增。
//	* 由此可以得出结论：数组在内存中是连续存放的
//	*/
//}


/*======================================== 二维数组 ========================================*/
/*------------------------ 二维数组的创建 ------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	int arr[2][4];
//	char ch[3][4];
//}

/*------------------------ 二维数组的初始化 ------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	//初始化 - 创建的同时赋值
//	int arr[2][2] = { {1,2},{3,4} };//完全初始化
//	int arr1[3][4] = { {1,2},{3,4},{5,6} };//不完全初始化
//	//二维数组如果有初始化，行可以省略，列不能省略
//	char ch[][3] = { {'a','b'},{'c','d'}};
//}

/*------------------------ 二维数组的使用 ------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	//二维数组的使用也是通过下标的方式
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	for (int i = 0; i < 3;i++) {
//		for (int j = 0; j < 4;j++) {
//			printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);
//		}
//	}
//}

/*------------------------ 二维数组在内存中的存储 ------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	//输出二维数组每个元素的地址
//	int arr[3][4] = { {1,2},{3,4},{5,6} };
//	//for (int i = 0; i < 3; i++) {
//	//	for (int j = 0; j < 4; j++) {
//	//		printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//	//	}
//	//}
//
//	//也可以通过指针找到后面的内存地址存放的元素
//	//int* p = arr;
//	//for (int i = 0; i < 12;i++) {
//	//	printf("%d ",*p);
//	//	p++;//访问下一个元素
//	//}
//	
//	//也可以通过arr[0]、arr[1]...访问某一个元素中的一维数组，例如：
//	//for (int i = 0; i < 4;i++) {
//	//	printf("%d ",arr[0][i]);//1 2 0 0
//	//}
//}

/*======================================== 数组越界 ========================================*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	//下标从0开始的，如果数组有n个元素，最后一个元素的下标就是n-1
//	//下标如果小于0，或者大于n-1，就是数组越界访问了，超出了数组合法空间的访问
//	int nums[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (int i = 0; i <= 10;i++) {
//		printf("%d ",nums[i]);//error
//	}
//}


/*==================================== 数组作为函数参数 ====================================*/

/*------------------------ 数组大小问题 ------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void test(int nums[]) {
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	printf("%d",numsSize);//2
//}
//void main() {
//	int nums[10] = { 0 };
//	test(nums);
//}

/*------------------------ 冒泡排序 ------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void BubbleSort1(int nums[],int numsSize) {
//	int tmp = 0;
//	for (int i = 0; i < numsSize; i++) {
//		//numsSize-1-i:-i是指后面的元素不需要再次排序了，提高效率
//		for (int j = 0; j < numsSize - 1 - i; j++) {
//			if (nums[j] > nums[j + 1]) {
//				tmp = nums[j + 1];
//				nums[j + 1] = nums[j];
//				nums[j] = tmp;
//			}
//		}
//	}
//}
////冒泡优化 当原数组本身就是有序的时候使用
//void BubbleSort2(int nums[], int numsSize) {
//	int tmp = 0;
//	
//	for (int i = 0; i < numsSize; i++) {
//		int falg = 0;
//		//numsSize-1-i:-i是指后面的元素不需要再次排序了，提高效率
//		for (int j = 0; j < numsSize - 1 - i; j++) {
//			if (nums[j] > nums[j + 1]) {
//				tmp = nums[j + 1];
//				nums[j + 1] = nums[j];
//				nums[j] = tmp;
//				falg = 1;
//			}
//		}
//		if (falg == 0) break;
//	}
//}
//void main() {
//	int nums[] = {4,5,3,7,9,10,19,2};
//	int numsSize = sizeof(nums) / sizeof(nums[0]);
//	BubbleSort2(nums, numsSize);
//	for (int i = 0; i < numsSize;i++) {
//		printf("%d ",nums[i]);
//	}
//}

/*==================================== Day06结束 ====================================*/