/*========================================��֧========================================*/
/*------------------------If���------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int age = 25;
//	//C�����з�0Ϊ�棬0Ϊ�٣�Ϊ��ʱִ��if�еĴ����
//	//����֧
//	//if (age >= 18) {
//	//	printf("������\n");
//	//}
//
//	//˫��֧
//	//if (age >= 18) {
//	//	printf("������\n");
//	//}
//	//else {
//	//	printf("δ������\n");
//	//}
//
//	//���֧
//	//if (age < 18) {
//	//	printf("����\n");
//	//}
//	//else if (age <= 26) {
//	//	printf("����\n");
//	//}
//	//else if (age <= 40) {
//	//	printf("����\n");
//	//}
//	//else{
//	//	printf("����");
//	//}
//}

/*------------------------����else------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////�ʵ���ʹ��{}����ʹ������߼����������
////���������Ҫ
////else��ƥ�䣺��if���û��{}ʱ��else�Ǻ�����������ifƥ���
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//        {
//            printf("hehe\n");
//        }
//    }
//    else
//    {
//        printf("haha\n");
//    }
//    return 0;
//}

/*------------------------switch���------------------------*/
/*
* ���磺����1���������һ����2��������ڶ�����3...��
* ���ֺܶ��֧������������if...else if...else if��
* �ַ�֧̫�鷳����ʱ����Ƽ���switcth�����
*/
//switch���Ҳ��һ�ַ�֧��䣬�������ڶ��֧�����
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(){
//	int day = 0;
//	scanf("%d",&day);
//	switch (day) {
//	case 1:
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
//		break;
//	//default�û��������ֵ��case�е�ֵ����ƥ��ʱִ�е����
//	default:
//			printf("�������");
//			break;
//	}
//	return 0;
//}

/*========================================ѭ��========================================*/

/*------------------------whileѭ��------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	//��ӡ1~10
//	int i = 1;//��ʼ��
//	while (i <= 10) {//�жϲ���
//		printf("%d ",i);
//		i++;//��������
//	}
//	//break:��ѭ����ֻҪ����break�����������е�ѭ����ֱ����ֹѭ��
//	//while (i <= 10) {
//	//	if (i == 5) break;
//	//	printf("%d ",i);
//	//	i++;
//	//}
//	//continue:������ֹ����ѭ��������ѭ����continue�����䲻����ִ��
//	//while (i <= 10) {
//	//	if (i == 5) {
//	//		continue;
//	//	}
//	//	printf("%d ", i);
//	//	i++;
//	//}
//	return 0;
//}

/*------------------------getchar()����------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(){
//    int ch = 0;
//    //getchar():��ȡ�����ַ��ĺ���
//    //1.getchar��ʵ���ص����ַ���ASCII��ֵ��������
//    //2.getchar�ڶ�ȡ��������ʧ�ܵ�ʱ�򣬻᷵��EOF
//    while ((ch = getchar()) != EOF)
//        putchar(ch);
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//    char password[10];
//    printf("���������룺");
//    scanf("%s", password);
//    printf("��ȷ������(Y/N)��");
//    //������л������е�����
//    while (getchar() != '\n') {
//        ;
//    }
//    int ch = getchar();
//    if (ch == 'Y') {
//        printf("��¼�ɹ�\n");
//    }
//    else  printf("��¼ʧ��\n");
//}

/*------------------------forѭ��------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	//��ӡ1~10
//	for (int i = 1; i <= 10; i++) {
//		printf("%d ",i);
//	}
//}

//forѭ���е�break��continue
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	//break:��������ѭ��
//	for (int i = 1; i <= 10; i++) {
//		if (i == 5) break;
//		printf("%d ",i);
//	}
//	printf("\n====\n");
//	//1 2 3 4
//	//continue:��������ѭ������whileѭ���п��ܳ�����ѭ��
//	for (int i = 1; i <= 10; i++) {
//		if (i == 5) continue;
//		printf("%d ", i);
//	}
//	//1 2 3 4 6 7 8 9 10
//	//while�е�continue
//	int i = 1;
//	while (i <= 10) {
//		if (i == 5) continue;
//		printf("%d ", i);
//		i++;
//	}
//	//1 2 3 4 ��ѭ��
//}

/*------------------------do whileѭ��------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	int i = 1;
//	//�ص㣺ѭ������ִ��һ�Σ�ʹ�õĳ������ޣ����Բ��Ǿ���ʹ�á�
//	//break:��������ѭ��
//	do {
//		if (i == 5) break;
//		printf("%d ",i);
//		i++;
//	} while (i <= 10);
//	//1 2 3 4
//
//	//continue:��������ѭ��
//	do {
//		if (i == 5) continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	//1 2 3 4 ��ѭ��
//}

/*========================================���⻷��========================================*/
/*
1.���� n�Ľ׳�
2.���� 1!+2!+3!+����+10!
3.��һ�����������в��Ҿ����ĳ������n��������ֲ��ң�
4.��д���룬��ʾ����ַ��������ƶ������м��ۡ�
5.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼����(ֻ���������������룬���������ȷ��
��ʾ��¼�ɣ�������ξ�����������˳�����
6.������С��Ϸ
*/

/*------------------------1.���� n�Ľ׳�------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	int i = 0,sum = 1;;
//	printf("������Ҫ��Ľ׳ˣ�");
//	scanf("%d", &i);
//	for (int j = 1; j <= i; j++) {
//		sum *= j;
//	}
//	printf("%d�Ľ׳��ǣ�%d",i,sum);
//}

/*------------------------2.���� 1!+2!+3!+����+10!------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	int sum = 0, ret = 1;
//	for (int i = 1; i <= 10;i++) {
//		sum += ret *= i;
//	}
//	printf("10���ڵĽ׳˺��ǣ�%d",sum);
//}

/*----------------3.��һ�����������в��Ҿ����ĳ������n(���ֲ���)----------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int arrlen = sizeof(arr) / sizeof(arr[0]);//�����ܳ���
//
//	printf("ԭ���飺");
//	for (int i = 0; i < arrlen; i++) printf("%d ", arr[i]);
//	
//	putchar('\n');
//
//	int ip = 0;
//	printf("��������ҪѰ�ҵ�����:");
//	scanf("%d",&ip);
//	//ʹ�ö��ֲ���
//
//	int i = 0;
//	int left = 0;//�����һ��Ԫ��
//	int right = arrlen;//�������һ��Ԫ��
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		int arrmid = arr[mid];
//		if (ip > arrmid) {
//			left = mid + 1;
//		}
//		else if (ip < arrmid) {
//			right = mid - 1;
//		}
//		else {
//			printf("��Ҫ��ѯ������Ϊ%d���±���%d", arrmid, mid);
//			break;
//		}
//	}
//}

/*------------------------4.��д���룬��ʾ����ַ��������ƶ������м���------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>

//void main() {
//	char ch[20] = "Welcome to C!!!";
//	char alter[20] = "###############";
//	int alllen = strlen(ch);
//	int left = 0, right = alllen - 1;
//	while (left <= right) {
//		alter[left] = ch[left];
//		alter[right] = ch[right];
//		printf("%s\n",alter);
//		Sleep(200);//���ߺ���
//		system("cls");//����
//		left++;
//		right--;
//	}
//	printf("%s\n", alter);
//}

/*----------------5.----------------*/
/*
* 5. ��д����ʵ�֣�ģ���û���¼�龰����
* ��ֻ�ܵ�¼����(ֻ���������������룬��
* ��������ȷ����ʾ��¼�ɣ�������ξ���
* ��������˳�����
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//void main() {
//	//��һ�ַ�ʽʵ�֣�
//	//char password[] = "leaf.123";
//	//char userPassword[20];
//	//int len = strlen(password) - 1;
//	//int log = 0;
//	//for (int i = 0; i < 3;i++) {
//	//	printf("���������룺");
//	//	scanf("%s", userPassword);
//	//	for (int j = 0; j < len;j++) {
//	//		if (password[i] == userPassword[i]) {
//	//			log = 1;
//	//		}
//	//		else break;
//	//	}
//	//	if (log) {
//	//		printf("������ȷ����¼�ɹ���");
//	//		break;
//	//	}
//	//	else {
//	//		printf("������󣬵�¼ʧ�ܣ�����������\n");
//	//		continue;
//	//	}
//	//		
//	//}
//
//	//�ڶ��ַ�ʽʵ�֣�����strcmp����
//	//char password[20] = "leaf.123";
//	//char userPassword[20];
//	//int log = 0;
//	//for (int i = 0; i < 3;i++) {
//	//	printf("���������룺");
//	//	scanf("%s",userPassword);
//	// //strcmp(param,param)���������������Ա��ַ����Ƿ���ͬ����ͬ����0
//	//	if (!strcmp(userPassword,password)) {
//	//		printf("������ȷ����¼�ɹ���");
//	//		log = 1;
//	//		break;
//	//	}
//	//	else {
//	//		printf("������󣬵�¼ʧ�ܣ�����������\n");
//	//	}
//	//}
//	//if (log == 0) {
//	//	printf("��������������˳�����");
//	//}
//}

/*------------------------6.������С��Ϸ------------------------*/
/*
* 1.�Զ�����һ��1-100֮��������
* 2.������
*	a.�¶��ˣ��͹�ϲ�㣬��Ϸ����
*	b.��´��ˣ�����߲´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
* 3.��Ϸ����һֱ�棬�����˳���Ϸ
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <time.h>
////�˵�
//void menu() {
//	printf("**********************************\n");
//	printf("************  1.paly  ************\n");
//	printf("************  0.exit  ************\n");
//	printf("**********************************\n");
//}
////�����ֵ�ʵ��
//void game() {
//	//rand������0-32767֮�������
//	int randNum = rand() % 100 + 1;//%100��������0-99,+1,��Χ�ͱ��1-100��
//	int input = 0;
//	while (1) {
//		printf("������Ҫ�µ����֣�");
//		scanf("%d",&input);
//		if (input > randNum) {
//			printf("�´���\n");
//		}
//		else if (input < randNum) {
//			printf("��С��\n");
//		}
//		else { 
//			printf("��ϲ�㣬�¶��ˣ�\n"); 
//			break; 
//		}
//	}
//}
//void main() {
//	int input = 0;
//	//srand������һ�������㣬��rand����֮ǰҪ�������������
//	//time����ȡϵͳʱ��
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("��ѡ��(1/0)");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//}

/*========================================goto���========================================*/
////goto�������ڳ�������ѭ��Ƕ�׵�����£���С��������������Ա���������������û��
//#define _crt_secure_no_warnings
//#include <stdio.h>
////������ʹ��goto����һ�����ӣ�Ȼ��ʹ��ѭ����ʵ�ַ�ʽ�滻goto��䣺
//int main(){
//    char input[10] = { 0 };
//    system("shutdown -s -t 60");
//again:
//    printf("���Խ���1�����ڹػ���������룺cancel����ȡ���ػ�!\n������:>");
//    scanf("%s", input);
//    if (0 == strcmp(input, "cancel")){
//        system("shutdown -a");
//    }
//    else{
//        goto again;
//    }
//    return 0;
//}
////�����������goto��䣬��
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//    char input[10] = { 0 };
//    system("shutdown -s -t 60");
//    printf("���Խ���1�����ڹػ���������룺cancel����ȡ���ػ�!\n������:>");
//    scanf("%s", input);
//    if (0 == strcmp(input, "cancel")) {
//        system("shutdown -a");
//    }
//    return 0;
//}


/*========================================Day04����========================================*/