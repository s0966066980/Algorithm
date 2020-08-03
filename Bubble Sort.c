#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, tmp;
	int data[8]= {16, 25, 39, 27, 12, 8, 45, 63};
	
	printf("原始資料: ");
	for (i = 0; i < 8; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");
	for (i = 7; i >= 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (data[j] > data[j + 1])
			{
				tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}
		printf("第%d次排序結果: ",8-i);
		for (j = 0; j <8; j++)
		{
			printf(" %d", data[j]);
		}
		printf("\n");
	}


	return 0;
}
