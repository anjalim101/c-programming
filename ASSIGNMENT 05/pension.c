#include<stdio.h>
void main(void)
{
	int age,amt=0;
	printf("\nEnter the age of person : ");
	scanf("%d", &age);
	if (age < 50)
	{
		amt = 0;
	}
	else if (age < 60)
	{
		amt = 5000;
	}
	else
	{
		amt = 10000;
	}
	printf("\n the pension amout is Rs.%d", amt);
}