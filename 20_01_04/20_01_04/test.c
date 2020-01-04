#include<stdio.h>
#include<assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char*arr_cpy = dest;
	assert((dest != NULL) && (*src != NULL));
	while ((*dest++ = *src++)!='\0');
	return arr_cpy;
}
int main()
{
	char arr[ ] = "###########";
	char arr1[ ] = "holle world";
	char* ret_arr=my_strcpy(arr,arr1);
	for (int i = 0; i < 11; i++)
	{
		printf("%c", *(arr+i));
	}
	return 0;
}


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