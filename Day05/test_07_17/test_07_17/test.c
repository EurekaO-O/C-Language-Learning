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

/*------------------------�Զ��庯������------------------------*/
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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
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
//����2��
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
//	printf("ԭ����:");
//	for (int i = 0; i < arrlen; i++) printf("%d ", arr[i]);
//
//	int input;
//	printf("\n��������Ҫ��ѯ������");
//	scanf("%d", &input);
//	int* result = Binary(arr, arrlen, input);
//	printf("��Ҫ��ѯ����:%d�±�:%d", result[0], result[1]);
//}

//��ʦ���ã���
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
//	printf("ԭ����:");
//	for (int i = 0; i < arrlen; i++) printf("%d ", arr[i]);
//
//	int input;
//	printf("\n��������Ҫ��ѯ������");
//	scanf("%d", &input);
//	printf("��Ҫ��ѯ�����±�:%d",Binary(arr,arrlen,input));
//}

//������������ķ�����
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

//������룡��������������������������������������������������
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
