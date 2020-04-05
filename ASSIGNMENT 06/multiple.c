#include<stdio.h>

void main(void)
{
	int no, i, mult = 0;
	printf("\n Enter the number : ");
	scanf("%d", &no);
	for (i = 1;i < 11;i++)
	{
		mult = i * no;
		printf("\n %d * %d = %d", no, i, mult);
	}

}