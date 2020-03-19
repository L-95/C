#define _CRT_SECURE_NO_WARNINGS
	/*int num1 = 9;
	int num2 = 5;
	int num3 = 2;
	int temp  = 7;
		if (num1 < num2)
		{
			temp = num1;
			num1 = num2;
			num2 = temp;
		}
		if (num1 < num3);
		{
			temp = num1;
			num1 = num3;
			num3 = temp;
		}
		if (num2 < num3)
		{
			temp = num2;
			num2 = num3;
			num3 = temp;
		}
	printf("%d%d%d", num1, num2, num3);*/
	/*int a = 1;
	switch (a)
	{
	default: a = 4;
		break;
	case 2: a = 2;
	
	
	case 1:a = 3;
	printf("%d", a);*/


//	int main()
//	{
//		int year = 0;
//		for ( year = 1000; year < 2001; year++)
//		{
//			if (year % 400 == 0 && year % 100 == 0 ||
//				year % 100 != 0 && year % 4 == 0)
//				printf("%d\n", year);
//		}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int temp = 0;
//	scanf("%d%d", &num1, &num2);
//	while (1)
//	{
//		temp = num1%num2;
//		num1 = num2;
//		num2 = temp;
//		if (temp == 0)
//		{
//			printf("%d", num1);
//			break;
//		}
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	for (int a = 1; a < 10; a++)
//	{
//		printf("\n");
//		for (int b = 1; b <= a; b++)
//		{
//			printf("%4d*%d=%2d", b, a, a*b);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	printf("请输入十个整数：\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int n = 0;
//	int j  = 0;
//	int temp = 0;
//	for ( n = 1; n < 10; n++)
//	{
//		for ( j = 9; j > n - 1; j--)
//		{
//			if (arr[j] > arr[j - 1])
//			{
//				temp = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = temp;
//			}
//		}
//	}
//	printf("由大到小排序为：\n");
//	for (i = 0; i < 10; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	double temp = 0.0;
//	int  a = 1;
//	int  c = 1;
//	for (a = 1; a < 101; a++)
//	{
//		temp +=1.0 / a*c;
//		c *= -1;
//	}
//	printf("%f", temp);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int temp = 0;
//	for (a = 1; a < 101; a++)
//	{
//		if (a/10%10==9)
//			temp++;
//		if (a % 10 == 9)
//			temp++;
//	}
//	printf("%d",temp);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	printf("请输入要查找的数字(十以内的整数)：");
//	printf("\n");
//	int fund = 0;
//	scanf("%d", &fund);
//	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (fund>arr[mid])
//			left = mid + 1;
//		if (fund < arr[mid])
//			right = mid - 1;
//		if (fund == arr[mid])
//			break;
//	}
//	if (left>right)
//		printf("没找到！");
//	else
//	{
//		printf("找到了！下标为：%d", mid);
//	}
//	return 0;
////}
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void Menu(void)
//{
//	printf("#################");
//	printf("##      1：开始游戏      ##");
//	printf("##      2：退出游戏      ##");
//	printf("#################");
//}
//int Game()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ans = rand();
//	while (1)
//	{
//		if (a > ans)
//		{
//			printf("猜大了！\n");
//		}
//		if (a < ans)
//		{
//			printf("猜小了！\n");
//		}
//		if (a == ans)
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//		return 0;
//	}
//		
//
//int main()
//{
//
//	int srand = ((unsigned int)time(NULL));
//	do
//	{
//		Menu;
//		int menu = 0;
//		scanf("%d", &menu);
//		if (menu == 1)
//			Game;
//		else if (menu == 2)
//			break;
//		else
//			printf("您的输入有误，请重新输入！");
//	} while (1);
//
//	return 0;
//}

//int main()
//{
//	printf("111");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>

//int main()
//{
//	//int a = 0;
//	//int b = 0;
//	//c = a = b;
//	//int c = 0;
//
//	return 0;
//}
//void  Menu()
//{
//	printf("#################\n");
//	printf("## 1：开始游戏 ##\n");
//	printf("## 2：退出游戏 ##\n");
//	printf("#################\n");
//}
//void Game()
//{
//	int ans = rand() % 100;
//	do
//	{
//		printf("请输入您要猜的数字：");
//		int a = 0;
//		scanf("%d", &a);
//		if (a > ans)
//		{
//			printf("猜大了！\n");
//		}
//		if (a < ans)
//		{
//			printf("猜小了！\n");
//		}
//		if (a == ans)
//		{
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//	} while (1);
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	while (1)
//	{
//		Menu();
//		int menu = 0;
//		scanf("%d", &menu);
//		if (menu == 1)
//			Game();
//		else if (menu == 2)
//			break;
//		else
//			printf("您的输入有误，请重新输入！");
//	}
//	return 0;
//}


//#include<stdio.h>
//void Mul_table()
//{
//	int a = 0;
//	int b = 0;
//	int n = 0;
//	printf("自定义乘法口诀表，请输入自定义权数：");
//	scanf("%d", &n);
//	for (a = 1; a <= n; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			printf("%3d*%2d=%2d", b, a, a*b);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	Mul_table();
//	return 0;
//}

//#include<stdio.h>
//void Ret(int* a, int* b)
//{
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	Ret(&a,&b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b ; 
//	b = a ^ b	;
//	a = a  ^b  ;
//	printf("a=%d,b=%d\n", a,b);
//	return 0;
//}
//void Is_Leap_Year()
//{
//	int start = 0;
//	int end = 0;
//	int year = 0;
//	printf("请输入开始年份（按回车键完成）：");
//	scanf("%d", &start);
//	printf("请输入结束年份（按回车键完成）：");
//	scanf("%d", &end);
//	for ( year = start; year <= end; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0
//			|| year % 400 == 0)
//		{
//			printf("%d\n", year);
//		}
//	}
//}
//int main()
//{
//	Is_Leap_Year();
//	return 0;
//}
#include<stdio.h>
#include <math.h>

//void Print_Leap_Year()
//{
//	int start = 0;
//	int end = 0;
//	int year = 0;
//	printf("请输入开始年份（按回车键完成）：");
//	scanf("%d", &start);
//	printf("请输入结束年份（按回车键完成）：");
//	scanf("%d", &end);
//	for (year = start; year <= end; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0
//			|| year % 400 == 0)
//		{
//			printf("%d\n", year);
//		}
//	}
//}
//i/*nt Is_Prime(int num)
//{
//	int factor = 0;
//	int count = 0;
//		for (factor = 2; factor <= sqrt(num); factor++)
//		{
//			if (num%factor == 0)
//			{
//				count++;
//			}
//		}
//		if (count == 0)
//		{
//			return 1;
//		}
//		return 0;
//}
//int main()
//{
//	int start = 0;
//	int end = 0;
//	int num = 0;
//	printf("请输入起始数字：");
//	scanf("%d", &start);
//	printf("请输入结束数字：");
//	scanf("%d", &end);
//	printf("素数为：\n");
//	for (num = start; num <= end; num++)
//	{
//		int ret = Is_Prime(num);
//		if (ret == 1)
//		{
//			printf("%d ", num);
//		}
//	}
//	printf("\n");
//	return 0;
//}*/

#include<stdio.h>

//int  Is_Leap_Year(int year)
//{
//	return   year % 4 == 0 && year % 100 != 0
//				|| year % 400 == 0;
//}
//int main()
//{
//	int start = 0;
//	int end = 0;
//	int year = 0;
//	printf("请输入开始年份（按回车键完成）：");
//	scanf("%d", &start);
//	printf("请输入结束年份（按回车键完成）：");
//	scanf("%d", &end);
//	for (year = start; year <= end; year++)
//	{
//		if (Is_Leap_Year(year) != 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}

//void Mul_table(int n)
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a <= n; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			printf("%3d*%2d=%2d", b, a, a*b);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("自定义乘法口诀表，请输入自定义权数：");
//	scanf("%d", &n);
//	Mul_table(n);
//	return 0;
//}
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1

//#include<stdio.h>
//void Mul_table(int n)
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1; a <= n; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			printf("%3d*%2d=%2d", b, a, a*b);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("自定义乘法口诀表，请输入自定义权数：");
//	scanf("%d", &n);
//	Mul_table(n);
//	return 0;
//}
//2
//#include<stdio.h>
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a=%d,b=%d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//3
//#include<stdio.h>
//
//void Ret(int* a, int* b)
//{
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	Ret(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
//4
//#include<stdio.h>
//
//int Is_Leap_Year(int year)
//{
//	return year % 4 == 0 && year % 100 != 0
//		|| year % 400 == 0;
//}
//int main()
//{
//	int start = 0;
//	int end = 0;
//	int year = 0;
//	printf("请输入开始年份（按回车键完成）：");
//	scanf("%d", &start);
//	printf("请输入结束年份（按回车键完成）：");
//	scanf("%d", &end);
//	for (year = start; year <= end; year++)
//	{
//		if (Is_Leap_Year(year) != 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//5
//#include<stdio.h>
//#include<math.h>
//
//int Is_Prime(int num)
//{
//	int factor = 0;
//	int count = 0;
//	for (factor = 2; factor <= sqrt(num); factor++)
//	{
//		if (num%factor == 0)
//		{
//			count++;
//		}
//	}
//	if (count == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int start = 0;
//	int end = 0;
//	int num = 0;
//	printf("请输入起始数字：");
//	scanf("%d", &start);
//	printf("请输入结束数字：");
//	scanf("%d", &end);
//	printf("素数为：\n");
//	for (num = start; num <= end; num++)
//	{
//		int ret = Is_Prime(num);
//		if (ret == 1)
//		{
//			printf("%d ", num);
//		}
//	}
//	printf("\n");
//	return 0;
//}



//#include<stdio.h>
//#include<math.h>
//
//int Is_Prime(int num)
//{
//	int factor = 0;
//	int count = 0;
//	for (factor = 2; factor <= sqrt(num); factor++)
//	{
//		if (num%factor == 0)
//		{
//			count++;
//		}
//	}
//	if (count == 0)
//	{
//		return num;
//	}
//	return 0;
//}
//int main()
//{
//	int start = 0;
//	int end = 0;
//	int num = 0;
//	printf("请输入起始数字：");
//	scanf("%d", &start);
//	printf("请输入结束数字：");
//	scanf("%d", &end);
//	printf("素数为：\n");
//	for (num = start; num <= end; num++)
//	{
//		int ret = Is_Prime(num);
//		if (ret != 0)
//		{
//			printf("%d ", ret);
//		}
//		
//	}
//	printf("\n");
//	return 0;
//}


#include<stdio.h>
//int a = 1;
//int b = 2;
//int lll()
//{
//	int c = a;
//	a = b;
//	b = c;
//}
//int main()
//{
//	lll();
//	printf("%d%d", a, b);
//	return 0;
//}
//
//int Fun(int n)
//{
//	if (n == 5)
//		return 2;
//	else
//		return 2 * Fun(n + 1);
//}
//#include<stdio.h>//非递归
//#include <string.h>
//
//int fib_num(int num)
//{
//	int fib1 = 1;
//	int fib2 = 1;
//	int fib3 = 1;
//	int i = 3;
//	while (i <= num)
//	{
//		fib3 = fib1 + fib2;
//		fib1 = fib2;
//		fib2 = fib3;
//		i++;
//	}
//	return fib3;
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int ret = fib_num(num);
//	printf("%d", ret);
//	return 0;
//}


//#include<stdio.h>//递归
//
//int fib_num(int num)
//{
//	if (num<3)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib_num(num - 1) + fib_num(num - 2);
//	}
//	return 0;
//}
//int main()
//{
//	int num;
//	scanf("%d", &num);
//	int ret = fib_num(num);
//	printf("%d", ret);
//	return 0;
//}

//#include<stdio.h>
//
//double  power(int n,int k)
//{
//	 if (k < 0)
//	{
//		return power(n,k + 1)/n;
//	}
//	 if (k>0)
//	{
//		return n*power(n, k - 1);
//	}
//	if (k == 0)
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	int n= 0;
//	int k = 0;
//	printf("请输入底数：");
//	scanf("%d", &n);
//	printf("请输入指数：");
//	scanf("%d", &k);
//	double  ret = power(n,k);
//	printf("%f", ret);
//	return 0;
//}

//#include<stdio.h>
//
//int DigitSum(int num)
//{
//	int tmp = 0;
//	int sum = 0;
//	if (num != 0)
//	{
//		tmp = num % 10;
//		sum=tmp+DigitSum(num/10 );
//	}
//	return sum;
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d", ret);
//	return 0;
//}


//编写一个函数 reverse_string(char * string)（递归实现）
//
//实现：将参数字符串中的字符反向排列。
//
//要求：不能使用C函数库中的字符串操作函数。

//
//. 递归和非递归分别实现strlen
//#include<stdio.h>
//
//int my_strlen(char arr[ ])
//{
//	int count = 0;
//	while (1)
//	{
//		arr ++;
//		count ++;
//		if (*arr == '\0')
//		{
//			break;
//		}
//	}
//	return count;
//}
//int main()
//{
//	char arr[ ] = "123";
//	int ret=my_strlen(arr);
//	printf("%d", ret);
//	return 0;
//}


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//#include<stdio.h>
//
//int Fac(n)
//{
//	if (n==1)
//	{
//		return 1;
//	}
//	return n*Fac(n - 1);
//}
//int main()
//{
//	int n =0;
//	scanf("%d", &n);
//	int ret=Fac(n);
//	printf("%d", ret);
//	return 0;
//}

//递归方式实现打印一个整数的每一位

//#include<stdio.h>
//
//void print_num(num)
//{
//	if (num>9)
//	{
//		print_num(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	int num = 123;
//	print_num(num);
//	return 0;
//}

//#include<stdio.h>
//
//int DigitSum(int num)
//{
//	int sum = 0;
//	int tmp = 0;
//	if (num<=9)
//	{
//		sum = num;
//		return sum;
//	}
//	tmp=num % 10;
//	sum =tmp+ DigitSum(num / 10);
//	return sum;
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	int ret = DigitSum(num);
//	printf("%d", ret);
//	return 0;
//
//#include<stdio.h>
////#include<stdlib.h>
//#define SZ 3
//int main()
//{
//	int arr0[NUM] = { 1, 2, 3 };
//	int arr1[NUM] = { 4, 5, 6 };
//	for (int i = 0; i < NUM; i++)
//	{
//		int tmp = 0;
//		tmp = arr0[i];
//		arr0[i] = arr1[i];
//		arr1[i] = tmp;
//		printf("arr0[%d] = %d\n", i, arr0[i]);
//		printf("arr1[%d] = %d\n", i, arr1[i]);
//	}
//
//	return 0;
//}

//void init(int arr[ ], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		*(arr+i) = 0;
//	}
//}
//void print(int arr[ ], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//void reverse(int arr[ ],int sz)
//{
//	for (int i = 0; i < sz/2; i++)
//	{
//		int tmp = 0;
//		tmp = *(arr + i);
//		*(arr + i) = *(arr + (sz-1) - i);
//		*(arr + (sz-1) - i) = tmp;
//	}
//}
//int main()
//{
//	int arr[SZ] = { 1, 2, 3 };
//	print(arr,SZ);
//	printf("打印每一个元素\n");
//	reverse(arr,SZ);
//	for (int i = 0; i < SZ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("逆置\n");
//	init(arr, SZ);
//	for (int i = 0; i < SZ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("初始化为0\n");
//	return 0;
//}

//#include<stdio.h>
//
//#define SZ 10
//
//int main()
//{
//	int arr[ ] = { 0,1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0 ; i < sz-1 ; i++)
//	{
//		for (int j = 0; j < sz - i; j++)
//		{
//			if (arr[j] < arr[j +1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 1;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
#include<stdio.h>
#include <stdio.h>
//#include <stdio.h>
//int i;
//int main()
//{
//	i--;
//		if (i > sizeof(i))
//		{
//			printf(">\n");
//		}
//		else
//		{
//			printf("<\n");
//		}
//	return 0;
//}
//
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (count = 32)
//	{
//		value=value&(value - 1);
//		count++;
//	}
//	return count;
//}
//#define NUM 15
//int main()
//{
//	int count = 16;
//	int a = NUM;
//	int tmp = 0;
//	while (count)
//	{
//		tmp = (a & 0x80000000)/0x80000000;
//			a=a << 2;
//		printf("%d ", tmp);
//		count--;
//	}
//	printf("\n");
//	count = 16;
//	a = NUM;
//	a=a << 1;
//	while (count)
//	{
//		tmp = (a & 0x80000000) / 0x80000000;
//		a=a << 2;
//		printf("%d ", tmp);
//		count--;
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int count = 0;
//	int c = a^b;
//	while (c)
//	{
//		c = c&(c - 1);
//		count++;
//	}
//	printf("%d ", count);
//	return 0;
//}

#include<stdio.h>

//int main()
//{
//	char* arr[3] = { "zhangsan", "lisi", "wangwu" };
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s \n", arr[i]);
//	}
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(*p);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *p + i);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//#include<assert.h>
//#include<string.h>
//char* Reverse(char* str,int sz)
//{
//	assert(str != NULL);
//	for (int i = 0; i < sz/2 ; i++)
//	{
//		*(str+i) = *(str+i)^*(str + sz -i-1);
//		*(str + sz -i-1)*=(str+i)^*(str + sz -i-1);
//		*(str+i) = *(str+i)^*(str + sz -i-1);
//	}
//	return str;
//}
//
//int main()
//{
//	char str[] = "hello bit";
//	//在这里完成下面函数，参数自己设计，要求：使用指针
//	int sz = strlen(str);
//	char* p = Reverse(str,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c", *(p+i));
//	}
//	return 0;
//}



//#include <stdio.h>
//void print(int* arr,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *arr+ i);
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(*p);
//	print(arr,sz);
//	return 0;
//}



//用C语言在屏幕上输出以下图案：
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int p = 0;
//	scanf("%d", &n);
//	if (n %2)
//		p = (n / 2 + 1);
//	else
//		p = n / 2;
//		for (int i = 1; i <= p; i++)
//		{
//			for (int j = n/2; j >=i; j--)
//			{
//				printf("   ");
//			}
//			for (int j = 0; j < ((2 * i) - 1); j++)
//			{
//				printf(" * ");
//			}
//			printf("\n");
//		}
//		for (int i = n/2; i >= 1; i--)
//		{
//			for (int j =0; j <=(n/2)-i; j++)
//			{
//				printf("   ");
//			}
//			for (int j = ((2 * i) - 1); j > 0; j--)
//			{
//				printf(" * ");
//			}
//			printf("\n");
//	}
//	return 0;
//}



//逆序字符串
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//char* Reverse(char* str, int sz)
//{
//	assert(str != NULL);
//	for (int i = 0; i < sz / 2; i++)
//	{
//		char tmp = *(str + i);
//		*(str + i) = *(str + sz - i - 1);
//		*(str + sz - i - 1) = tmp;
//	}
//	return str;
//}
//
//
//int main()
//{
//	char str[] = "hello bit";
//	//在这里完成下面函数，参数自己设计，要求：使用指针
//	int sz = strlen(str);
//	char* p = Reverse(str, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c", *(p + i));
//	}
//	return 0;
//}
//
//求出0～100000之间的所有“水仙花数”并输出
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//	for (int i = 0; i < 100001; i++)
//	{
//		int count = 0;
//		int tmp = i;
//		while (tmp)
//		{
//			tmp/=10;
//			count++;
//		}
//		int e = i % 10;
//		int d = i / 10 % 10;
//		int c = i / 100 % 10;
//		int b = i / 1000 % 10;
//		int a = i / 10000 % 10;
//		if (pow(a,count) + pow(b,count) +
//			pow(c,count)+pow(d,count)+
//			pow(e,count) == i)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//
//#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	printf("请输入要计算的数字：\n");
//	scanf("%d", &a);
//	printf("请输入要计算的项数：\n");
//	scanf("%d", &n);
//	int tmp = a;
//	int sum = a;
//	for (int i = 1; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum +=tmp;
//	}
//	printf("%d", sum);
//	return 0;
//}


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水

//#include<stdio.h>
//
//int num(int bttle, int base)
//{
//	 if (bttle==1)
//	 {
//		 return 1;
//	 }
//	 return  bttle + bttle % base + num(bttle / base,base);
//}
//int main()
//{
//	int mony= 1;
//	int base = 2;//每base个空瓶可以换一瓶
//	printf("请输入钱数：mony=");
//	scanf("%d", &mony);
//	printf("每n个空瓶可以换一瓶，请输入：n=");
//	scanf("%d", &base);
//	int sum = num(mony, base);
//	printf("总共可以喝%d瓶\n", sum);
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[ ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello  bit\n");
//	}
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	char *p;
//}S;
//int main()
//{
//	S.age = 10;
//	struct Stu * p=&S;
//	printf("%d",(*p).age);
//	printf("%d", p->age);
//	return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int num = 0;
//	int n = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 0; j < n -i; j++)
//		{
//			if (arr[j] % 2 == 0)
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcpy(char* dest, const char* src)
//{
//	char*arr_cpy = dest;
//	assert((dest != NULL) && (*src != NULL));
//	while ((*dest++ = *src++)!='\0');
//	return arr_cpy;
//}
//int main()
//{
//	char arr[ ] = "###########";
//	char arr1[ ] = "holle world";
//	char* ret_arr=my_strcpy(arr,arr1);
//	for (int i = 0; i < 11; i++)
//	{
//		printf("%c", *(arr+i));
//	}
//	return 0;
//}


#include<stdio.h>
#include<assert.h>

int my_strlen(const char* arr)
{
	assert(arr != NULL);
	int count = 0;
	while (*arr++)
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "holle world";
	int ret = my_strlen(arr);
	printf("%d", ret);
	return 0;
}