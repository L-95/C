//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水

#include<stdio.h>

int num(int bttle, int base)
{
	 if (bttle==1)
	 {
		 return 1;
	 }
	 return  bttle + bttle % base + num(bttle / base,base);
}
int main()
{
	int mony= 1;
	int base = 2;//每base个空瓶可以换一瓶
	/*printf("请输入钱数：mony=");
	scanf("%d", &mony);
	printf("每n个空瓶可以换一瓶，请输入：n=");
	scanf("%d", &base);*/
	int sum = num(mony, base);
	printf("总共可以喝%d瓶\n", sum);
	return 0;
}


//逆序字符串（指针，位运算）
#include<assert.h>
#include<string.h>
char* Reverse(char* str,int sz)
{
	assert(str != NULL);
	for (int i = 0; i < sz/2 ; i++)
	{
		*(str+i) = *(str+i)^*(str + sz -i-1);
		*(str + sz -i-1)=*(str+i)^*(str + sz -i-1);
		*(str+i) = *(str+i)^*(str + sz -i-1);
	}
	return str;
}

int main()
{
	char str[] = "hello bit";
	//在这里完成下面函数，参数自己设计，要求：使用指针
	int sz = strlen(str);
	char* p = Reverse(str,sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%c", *(p+i));
	}
	return 0;
}


//数组（指针训练）
#include <stdio.h>
void print(int* arr,int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *arr+ i);
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(*p);
	print(arr,sz);
	return 0;
}