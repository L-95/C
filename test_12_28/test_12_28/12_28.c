//逆序字符串
#include<stdio.h>
#include<assert.h>
#include<string.h>
char* Reverse(char* str, int sz)
{
	assert(str != NULL);
	for (int i = 0; i < sz / 2; i++)
	{
		char tmp = *(str + i);
		*(str + i) = *(str + sz - i - 1);
		*(str + sz - i - 1) = tmp;
	}
	return str;
}

int main()
{
	char str[] = "hello bit";
	//在这里完成下面函数，参数自己设计，要求：使用指针
	int sz = strlen(str);
	char* p = Reverse(str, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%c", *(p + i));
	}
	return 0;
}

//求出0～100000之间的所有“水仙花数”并输出
#include<stdio.h>
#include<math.h>

int main()
{
	for (int i = 0; i < 100001; i++)
	{
		int count = 0;
		int tmp = i;
		while (tmp)
		{
			tmp /= 10;
			count++;
		}
		int e = i % 10;
		int d = i / 10 % 10;
		int c = i / 100 % 10;
		int b = i / 1000 % 10;
		int a = i / 10000 % 10;
		if (pow(a, count) + pow(b, count) +
			pow(c, count) + pow(d, count) +
			pow(e, count) == i)
			printf("%d\n", i);
	}
	return 0;
}


//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
#include<stdio.h>

int main()
{
	int a = 0;
	int n = 0;
	printf("请输入要计算的数字：\n");
	scanf("%d", &a);
	printf("请输入要计算的项数：\n");
	scanf("%d", &n);
	int tmp = a;
	int sum = a;
	for (int i = 1; i < n; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	printf("%d", sum);
	return 0;
}
