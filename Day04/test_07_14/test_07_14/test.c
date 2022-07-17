/*========================================分支========================================*/
/*------------------------If语句------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	int age = 25;
//	//C语言中非0为真，0为假，为真时执行if中的代码块
//	//单分支
//	//if (age >= 18) {
//	//	printf("成年人\n");
//	//}
//
//	//双分支
//	//if (age >= 18) {
//	//	printf("成年人\n");
//	//}
//	//else {
//	//	printf("未成年人\n");
//	//}
//
//	//多分支
//	//if (age < 18) {
//	//	printf("少年\n");
//	//}
//	//else if (age <= 26) {
//	//	printf("青年\n");
//	//}
//	//else if (age <= 40) {
//	//	printf("中年\n");
//	//}
//	//else{
//	//	printf("老年");
//	//}
//}

/*------------------------悬空else------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////适当的使用{}可以使代码的逻辑更加清楚。
////代码风格很重要
////else的匹配：当if语句没有{}时，else是和它离的最近的if匹配的
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

/*------------------------switch语句------------------------*/
/*
* 比如：输入1，输出星期一输入2，输出星期二输入3...，
* 这种很多分支的情况，如果用if...else if...else if这
* 种分支太麻烦，这时候就推荐用switcth语句了
*/
//switch语句也是一种分支语句，常常用于多分支的情况
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(){
//	int day = 0;
//	scanf("%d",&day);
//	switch (day) {
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期日");
//		break;
//	//default用户输入的数值和case中的值都不匹配时执行的语句
//	default:
//			printf("输入错误");
//			break;
//	}
//	return 0;
//}

/*========================================循环========================================*/

/*------------------------while循环------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	//打印1~10
//	int i = 1;//初始化
//	while (i <= 10) {//判断部分
//		printf("%d ",i);
//		i++;//调整部分
//	}
//	//break:在循环中只要遇到break，就跳出所有的循环，直接终止循环
//	//while (i <= 10) {
//	//	if (i == 5) break;
//	//	printf("%d ",i);
//	//	i++;
//	//}
//	//continue:用于终止本次循环，本次循环中continue后的语句不会再执行
//	//while (i <= 10) {
//	//	if (i == 5) {
//	//		continue;
//	//	}
//	//	printf("%d ", i);
//	//	i++;
//	//}
//	return 0;
//}

/*------------------------getchar()函数------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(){
//    int ch = 0;
//    //getchar():读取单个字符的函数
//    //1.getchar其实返回的是字符的ASCII码值（整数）
//    //2.getchar在读取结束或者失败的时候，会返回EOF
//    while ((ch = getchar()) != EOF)
//        putchar(ch);
//    return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//    char password[10];
//    printf("请输入密码：");
//    scanf("%s", password);
//    printf("请确认密码(Y/N)：");
//    //清空所有缓冲区中的数据
//    while (getchar() != '\n') {
//        ;
//    }
//    int ch = getchar();
//    if (ch == 'Y') {
//        printf("登录成功\n");
//    }
//    else  printf("登录失败\n");
//}

/*------------------------for循环------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main() {
//	//打印1~10
//	for (int i = 1; i <= 10; i++) {
//		printf("%d ",i);
//	}
//}

//for循环中的break和continue
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	//break:跳出整个循环
//	for (int i = 1; i <= 10; i++) {
//		if (i == 5) break;
//		printf("%d ",i);
//	}
//	printf("\n====\n");
//	//1 2 3 4
//	//continue:跳出本次循环，在while循环中可能出现死循环
//	for (int i = 1; i <= 10; i++) {
//		if (i == 5) continue;
//		printf("%d ", i);
//	}
//	//1 2 3 4 6 7 8 9 10
//	//while中的continue
//	int i = 1;
//	while (i <= 10) {
//		if (i == 5) continue;
//		printf("%d ", i);
//		i++;
//	}
//	//1 2 3 4 死循环
//}

/*------------------------do while循环------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	int i = 1;
//	//特点：循环至少执行一次，使用的场景有限，所以不是经常使用。
//	//break:跳出整个循环
//	do {
//		if (i == 5) break;
//		printf("%d ",i);
//		i++;
//	} while (i <= 10);
//	//1 2 3 4
//
//	//continue:跳出本次循环
//	do {
//		if (i == 5) continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	//1 2 3 4 死循环
//}

/*========================================例题环节========================================*/
/*
1.计算 n的阶乘
2.计算 1!+2!+3!+……+10!
3.在一个有序数组中查找具体的某个数字n（讲解二分查找）
4.编写代码，演示多个字符从两端移动，向中间汇聚。
5.编写代码实现，模拟用户登录情景，并且只能登录三次(只允许输入三次密码，如果密码正确则
提示登录成，如果三次均输入错误，则退出程序。
6.猜数字小游戏
*/

/*------------------------1.计算 n的阶乘------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	int i = 0,sum = 1;;
//	printf("请输入要求的阶乘：");
//	scanf("%d", &i);
//	for (int j = 1; j <= i; j++) {
//		sum *= j;
//	}
//	printf("%d的阶乘是：%d",i,sum);
//}

/*------------------------2.计算 1!+2!+3!+……+10!------------------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	int sum = 0, ret = 1;
//	for (int i = 1; i <= 10;i++) {
//		sum += ret *= i;
//	}
//	printf("10以内的阶乘和是：%d",sum);
//}

/*----------------3.在一个有序数组中查找具体的某个数字n(二分查找)----------------*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void main() {
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int arrlen = sizeof(arr) / sizeof(arr[0]);//数组总长度
//
//	printf("原数组：");
//	for (int i = 0; i < arrlen; i++) printf("%d ", arr[i]);
//	
//	putchar('\n');
//
//	int ip = 0;
//	printf("请输入您要寻找的数字:");
//	scanf("%d",&ip);
//	//使用二分查找
//
//	int i = 0;
//	int left = 0;//数组第一个元素
//	int right = arrlen;//数组最后一个元素
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
//			printf("您要查询的数字为%d，下标是%d", arrmid, mid);
//			break;
//		}
//	}
//}

/*------------------------4.编写代码，演示多个字符从两端移动，向中间汇聚------------------------*/
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
//		Sleep(200);//休眠函数
//		system("cls");//清屏
//		left++;
//		right--;
//	}
//	printf("%s\n", alter);
//}

/*----------------5.----------------*/
/*
* 5. 编写代码实现，模拟用户登录情景，并
* 且只能登录三次(只允许输入三次密码，如
* 果密码正确则提示登录成，如果三次均输
* 入错误，则退出程序
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//void main() {
//	//第一种方式实现：
//	//char password[] = "leaf.123";
//	//char userPassword[20];
//	//int len = strlen(password) - 1;
//	//int log = 0;
//	//for (int i = 0; i < 3;i++) {
//	//	printf("请输入密码：");
//	//	scanf("%s", userPassword);
//	//	for (int j = 0; j < len;j++) {
//	//		if (password[i] == userPassword[i]) {
//	//			log = 1;
//	//		}
//	//		else break;
//	//	}
//	//	if (log) {
//	//		printf("密码正确，登录成功！");
//	//		break;
//	//	}
//	//	else {
//	//		printf("密码错误，登录失败！请重新输入\n");
//	//		continue;
//	//	}
//	//		
//	//}
//
//	//第二种方式实现：借助strcmp函数
//	//char password[20] = "leaf.123";
//	//char userPassword[20];
//	//int log = 0;
//	//for (int i = 0; i < 3;i++) {
//	//	printf("请输入密码：");
//	//	scanf("%s",userPassword);
//	// //strcmp(param,param)两个参数，用来对比字符串是否相同，相同返回0
//	//	if (!strcmp(userPassword,password)) {
//	//		printf("密码正确，登录成功！");
//	//		log = 1;
//	//		break;
//	//	}
//	//	else {
//	//		printf("密码错误，登录失败！请重新输入\n");
//	//	}
//	//}
//	//if (log == 0) {
//	//	printf("三次密码均错误，退出程序");
//	//}
//}

/*------------------------6.猜数字小游戏------------------------*/
/*
* 1.自动产生一个1-100之间的随机数
* 2.猜数字
*	a.猜对了，就恭喜你，游戏结束
*	b.你猜错了，会告诉猜大了，还是猜小了，继续猜，直到猜对
* 3.游戏可以一直玩，除非退出游戏
*/
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <time.h>
////菜单
//void menu() {
//	printf("**********************************\n");
//	printf("************  1.paly  ************\n");
//	printf("************  0.exit  ************\n");
//	printf("**********************************\n");
//}
////猜数字的实现
//void game() {
//	//rand：生成0-32767之间的数字
//	int randNum = rand() % 100 + 1;//%100的余数是0-99,+1,范围就变成1-100了
//	int input = 0;
//	while (1) {
//		printf("请输入要猜的数字：");
//		scanf("%d",&input);
//		if (input > randNum) {
//			printf("猜大了\n");
//		}
//		else if (input < randNum) {
//			printf("猜小了\n");
//		}
//		else { 
//			printf("恭喜你，猜对了！\n"); 
//			break; 
//		}
//	}
//}
//void main() {
//	int input = 0;
//	//srand：设置一个随机起点，用rand函数之前要先设置这个函数
//	//time：获取系统时间
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("请选择：(1/0)");
//		scanf("%d", &input);
//		switch (input) {
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//}

/*========================================goto语句========================================*/
////goto语句多用于超过三层循环嵌套的情况下，但小白甚至初级程序员遇到这种情况几乎没有
//#define _crt_secure_no_warnings
//#include <stdio.h>
////下面是使用goto语句的一个例子，然后使用循环的实现方式替换goto语句：
//int main(){
//    char input[10] = { 0 };
//    system("shutdown -s -t 60");
//again:
//    printf("电脑将在1分钟内关机，如果输入：cancel，就取消关机!\n请输入:>");
//    scanf("%s", input);
//    if (0 == strcmp(input, "cancel")){
//        system("shutdown -a");
//    }
//    else{
//        goto again;
//    }
//    return 0;
//}
////而如果不适用goto语句，则：
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    char input[10] = { 0 };
//    system("shutdown -s -t 60");
//    while (1)
//    {
//        printf("电脑将在1分钟内关机，如果输入：cancel，就取消关机!\n请输入:>");
//        scanf("%s", input);
//        if (!strcmp(input, "cancel"))
//        {
//            system("shutdown -a");
//            break;
//        }
//    }
//    return 0;
//}


/*========================================Day04结束========================================*/
