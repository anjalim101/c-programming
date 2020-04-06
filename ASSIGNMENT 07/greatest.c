#include<stdio.h>

void main(void)
{
		int num1, num2, num3;
		printf("\n \t\t***** Program To Find Greatest Number From The Given*********");
		printf("\n Enter the first number : ");
		scanf("%d", &num1);
		printf("\n Enter the second number : ");
		scanf("%d", &num2);
		printf("\n Enter the third number : ");
		scanf("%d", &num3);
		
		if (num1 > num2)
		{
			if (num1 > num3)
			{
				printf("\n the greatest number is %d \n", num1);
			}
			else
			{
				printf("\n the greatest number is %d \n", num3);
			}
		}
		else if (num2 > num3)
			printf("\n the greatest number is %d \n", num2);
		else
			printf("\n the greatest number is %d \n", num3);
	
}