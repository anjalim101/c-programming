#include<stdio.h>

void main(void)
{
	int num, x = 0;
	printf("Enter a number to reverse\n"); 
	scanf("%d", &num);
	while (num != 0) 
	{
	x = x * 10;
	x = x + num % 10;
	num = num / 10; 
	}
	printf("Reverse of the number = %d\n", x);
}