//�����ַ���
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
	//������������溯���������Լ���ƣ�Ҫ��ʹ��ָ��
	int sz = strlen(str);
	char* p = Reverse(str, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%c", *(p + i));
	}
	return 0;
}

//���0��100000֮������С�ˮ�ɻ����������
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


//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
#include<stdio.h>

int main()
{
	int a = 0;
	int n = 0;
	printf("������Ҫ��������֣�\n");
	scanf("%d", &a);
	printf("������Ҫ�����������\n");
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
