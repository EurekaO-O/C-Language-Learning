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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//���������ֵ�ĺ���
int getMax(int a, int b) {
	return a > b ? a : b;
}
//���罻�����������ĺ���
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

	printf("���ֵ��%d\n",getMax(a,b));
	putchar('\n');

	//��������������ֵ��ʱ�򣬲���ֱ�Ӵ��ݱ�������Ҫ���ݵ�ַ
	//�������
	printf("����ǰ��%d %d\n",a,b);
	//ԭ���������ж�����ab,�����˿ռ䣬ӵ�����ڴ��ַ����swap1��
	//		���е��β������¿������ڴ棬ӵ��������ĵ�ַ����ַ��ͬ
	//swap1(a,b);//����ʧ��

	//ԭ���������ж�����ab,�����˿ռ䣬ӵ�����ڴ��ַ,swap2��
	//		���е��β���ָ�������ʵ�δ��ݵ�Ҳ��ͬһ���ڴ��ַ��
	//		�Ϳ���ͨ��ָ���ҵ��������е��ڴ��ַ�����޸ı�����ֵ
	swap2(&a,&b);//�����ɹ�
	printf("������%d %d",a,b);
}