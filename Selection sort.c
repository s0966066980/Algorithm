#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i, j, tmp,k = 0;
	int data[8]= {16, 25, 39, 27, 12, 8, 45, 63};
	
	printf("原始資料: ");
	for (i = 0; i < 8; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");
	
	for (i = 0; i < 8; i++)
	{
		k = i;
		for (j = i; j < 7; j++)
		{
			if (data[j] < data[k])
				k = j;
		}
		tmp = data[i];
		data[i] = data[k];
		data[k] = tmp;
		
	}
	printf("排序結果: ");
	for (i = 0; i < 8; i++)
	{
		printf("%d ", data[i]);
	}

	return 0;
}
