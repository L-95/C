#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x, y, z;
	for (x = 0; x < 30; x++)
	{
		for (y = 0; y < 30; y++)
		{
			for (z = 0; z < 30; z++)
			{
				if (x + y + z == 30 && (3 * x) + (2 * y) + z == 50)
					printf("%d,%d,%d", x, y, z);
			}
		}
	}
	system("pause");
	return 0;
}