//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ

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
	int base = 2;//ÿbase����ƿ���Ի�һƿ
	/*printf("������Ǯ����mony=");
	scanf("%d", &mony);
	printf("ÿn����ƿ���Ի�һƿ�������룺n=");
	scanf("%d", &base);*/
	int sum = num(mony, base);
	printf("�ܹ����Ժ�%dƿ\n", sum);
	return 0;
}


//�����ַ�����ָ�룬λ���㣩
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
	//������������溯���������Լ���ƣ�Ҫ��ʹ��ָ��
	int sz = strlen(str);
	char* p = Reverse(str,sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%c", *(p+i));
	}
	return 0;
}


//���飨ָ��ѵ����
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