/*================================�� ��================================*/

/*------------------------�⺯��------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//void main(){
//	/*
//	* strcpy(param1, param2) :�����ַ���
//	* param1:Ŀ�ĵ�    param2:ԭ��Դ
//	*/
//	//char arr1[20];
//	//char arr2[20] = "hello world";
//	//strcpy(arr1,arr2);
//	//printf("%s",arr1);//hello world
//
//	/*
//	* memset(param1, param2, param3) :��param1ָ����ڴ��ǰparam3���ֽ�����Ϊparam2
//	* param1:ԭ��Դ
//	* param2:�޸ĺ���ַ� 
//	* param3:ǰparam3���ֽ�
//	*/
//	//char arr1[20] = "hello world";
//	//memset(arr1,'*',5);
//	//printf("%s",arr1);//***** world
//}

/*--------------------�Զ��庯������--------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////���������ֵ�ĺ���
//int getMax(int a, int b) {
//	return a > b ? a : b;
//}
////���罻�����������ĺ���
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
//	//��������������ֵ��ʱ�򣬲���ֱ�Ӵ��ݱ�������Ҫ���ݵ�ַ
//	//�������
//	printf("����ǰ��%d %d\n",a,b);
//	//ԭ���������ж�����ab,�����˿ռ䣬ӵ�����ڴ��ַ����swap1��
//	//		���е��β������¿������ڴ棬ӵ��������ĵ�ַ����ַ��ͬ
//	//swap1(a,b);//��ֵ���ã�����ʧ��
//
//	//ԭ���������ж�����ab,�����˿ռ䣬ӵ�����ڴ��ַ,swap2��
//	//		���е��β���ָ�������ʵ�δ��ݵ�Ҳ��ͬһ���ڴ��ַ��
//	//		�Ϳ���ͨ��ָ���ҵ��������е��ڴ��ַ�����޸ı�����ֵ
//	swap2(&a,&b);//��ַ���ã������ɹ�
//	printf("������%d %d",a,b);
//}

/*------------------------��ϰ------------------------*/
/*
* 1. дһ�����������ж�һ�����ǲ�������
* 2. дһ�������ж�һ���ǲ�������
* 3. дһ��������ʵ��һ��������������Ķ��ֲ���
* 4. дһ��������ÿ����һ������������ͻὫ num ��ֵ����1
*/
//1. дһ�����������ж�һ�����ǲ�������
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
//	printf("������һ��������");
//	scanf("%d",&a);
//	printf("%s", isPrime(a) ? "����" : "��������");
//}

//2. дһ�������ж�һ���ǲ�������
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int isLeap(int a) {
//	return (a % 100 != 0 && a % 4 == 0 || a % 400 == 0);
//}
//void main() {
//	int input;
//	printf("��������ݣ�");
//	scanf("%d", &input);
//	printf("%s", isLeap(input) ? "����" : "��������");
//}

//3. дһ��������ʵ��һ��������������Ķ��ֲ���
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//����1��
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
//	printf("ԭ����:");
//	for (int i = 0; i < arrlen;i++) printf("%d ", arr[i]);
//
//	int input;
//	printf("\n��������Ҫ��ѯ������");
//	scanf("%d", &input);
//	int * result = Binary(arr,arrlen,input);
//	printf("��Ҫ��ѯ����:%d�±�:%d", result[0], result[1]);
//}
// 
//����2��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////arr[]:��������ָ�������ָ��ʵ��������׵�ַ
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
//	printf("ԭ����:");
//	for (int i = 0; i < arrlen; i++) printf("%d ", arr[i]);
//
//	int input;
//	printf("\n��������Ҫ��ѯ������");
//	scanf("%d", &input);
//	int* result = Binary(arr, arrlen, input);
//	printf("��Ҫ��ѯ����:%d�±�:%d", result[0], result[1]);
//}

//��ʦ���ģ���
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int Binary(int arr[],int arrlen, int input) {
//	//int arrlen = sizeof(arr) / sizeof(arr[0]);Errorԭ�����£�
//	//�����ڴ���ʱֻ�ᴫ���׵�ַ
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
//	printf("ԭ����:");
//	for (int i = 0; i < arrlen; i++) printf("%d ", arr[i]);
//
//	int input;
//	printf("\n��������Ҫ��ѯ������");
//	scanf("%d", &input);
//	int result = Binary(&arr, arrlen,input);
//	if (result != -1) {
//		printf("��Ҫ���ҵ������±�Ϊ��%d",result);
//	}
//	else printf("��Ǹû���ҵ���Ҫ���ҵ�Ԫ��");
//}

//4. дһ��������ÿ����һ������������ͻὫ num ��ֵ����1
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void addone(int* pi) {
//	(*pi)++;
//}
//void main() {
//	int input;
//	printf("������һ��������");
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

/*================================������Ƕ�׵��ú���ʽ����================================*/
/*------------------------Ƕ�׵���------------------------*/
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
// //��������Ƕ�ף�������Ƕ�׶���
//}

/*------------------------��ʽ����------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//void main() {
//	//int len = strlen("abc");
//	//printf("%d\n", len);//3
//	//��ʽ���ʣ���һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//	//printf("%d\n", strlen("abc"));
//	//printf():���ش�ӡ�ַ��ĸ��� ע��\nҲ����ַ�
//	printf("%d\n",printf("%d\n",printf("%d\n",100)));//100 4 2
//}

/*================================�����������Ͷ���================================*/
/*------------------------��������------------------------*/
/*
* 1. ���߱�������һ������������������������ʲô�����Ǿ�����
*    ���Ǵ��ڣ�����������������
* 2. ����������һ������ں�����ʹ��֮ǰ��Ҫ������������ʹ��
* 3. ����������һ��Ҫ����ͷ�ļ��е�
*/

/*------------------------��������------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	//�����Ķ�����ָ������ʵ�֣�����ĺ������ܵ�ʵ��
//	int a = 10, b = 20;
//	//�����������������÷�����
//	//һ����ͷ�ļ�������Դ�ļ�ʵ��
//	int Add(int,int);
//	printf("%d", Add(a, b));
//}
//int Add(int a, int b) {
//	return a + b;
//}
//ͷ�ļ�������Դ�ļ�ʵ�ֵĴ���
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
//ͷ�ļ�����ʹ��libʵ��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////���뾲̬��
//#pragma comment(lib,"calculator.lib")
//void main() {
//	int a = 10, b = 20;
//	printf("%d\n", Add(a, b));//30
//	printf("%d\n", Sub(a, b));//-10
//	printf("%d\n", Mul(a, b));//200
//	printf("%d\n", Div(a, b));//0
//}

/*================================�����ݹ�================================*/
/*------------------------��ϰ1------------------------*/
//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺���룺1234����� 1 2 3 4
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
//	printf("�����룺");
//	scanf("%u",&input);//1234
//	print(input);
//}
/*------------------------��ϰ2------------------------*/
//��д��������������ʱ���������ַ����ĳ���
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
/*------------------------�ݹ������------------------------*/
//��ϰ1
//��n�Ľ׳�,ʹ�õݹ飨�����������
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
//	printf("�����룺");
//	scanf("%d",&input);
//	printf("%d",Fac(input));
//}

//��ϰ2
//���n��쳲��������������������
//1 1 2 3 5 8 13 21 34 55...��ǰ����֮��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////�õݹ���Ȼ����򵥣���Ч����
//int Fib(int num) {
//	if (num <= 2) {
//		return 1;
//	}
//	else return Fib(num - 1) + Fib(num - 2);
//
//}
////��Щ����÷ǵݹ�д����
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
//	printf("�����룺");
//	scanf("%d", &input);
//	printf("%d", Fib(input));
//}
//��ҵ����ŵ��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void move(char a,char c,int n) {
//	printf("�ѵ�%d��Բ�̴�%c ---> %c\n",n,a,c);
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
//	printf("�����뺺ŵ����������:");
//	scanf("%d",&n);
//	Hanoi('a','b','c',n);
//	return 0;
//}

/*================================Day05����================================*/

/*================================������ҵ================================*/
//1.�ж�100~200֮�������
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
//			printf("������%d\n",i);
//		}
//	}
//}

//2.�ж����꣨�ܱ�4���������ܱ�100�������ܱ�400������
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//char* leapYear(int year) {
//	return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) ?"����":"��������";
//}
//void main() {
//	printf("��������ݣ�");
//	int year;
//	scanf("%d",&year);
//	char* result = leapYear(year);
//	printf("%s ", result);
//}

//3.ʵ��һ��������������������������
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void swap(int* a,int* b) {
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//void main() {
//	printf("���������������ÿո������");
//	int a, b;
//	scanf("%d %d",&a,&b);
//	swap(&a, &b);
//	printf("a=%d,b=%d", a,b);
//}

//4.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void MulTable(int num) {
//	for (int i = 1; i <= num; i++) {
//		for (int j = 1; j <= i;j++) {
//			//%-2d:ʮλ���������
//			printf("%d��%d=%-2d ",j,i,i*j);
//		}
//		putchar('\n');
//	}
//}
//void main() {
//	printf("�����룺");
//	int num;
//	scanf("%d", &num);
//	MulTable(num);
//}

//5.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void Per(int num) {
//	if (num > 9) {
//		Per(num / 10);
//	}
//	printf("%d ",num % 10);
//}
//void main() {
//	printf("�����룺");
//	int num;
//	scanf("%d", &num);
//	Per(num);
//}

//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�(���������������)
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
//	printf("�����룺");
//	int num;
//	scanf("%d", &num);
//	printf("%d�Ľ׳���%d\n",num, Fac1(num));
//	printf("%d�Ľ׳���%d\n",num, Fac2(num));
//}

//7.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�(���������������)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void ReverseStr(char str[]) {
	if () {
	
	}
	ReverseStr(str);
	printf("%c",str);
}
void main() {
	printf("�����룺");
	char str[4];
	scanf("%s", str);
	ReverseStr(num);
	//printf("%c",str[3]);
}