#include<stdio.h>

void main(void)
{
	float sal,da,ta,totsal;
	printf("\n Enter the basic salary : Rs");
	scanf("%f", &sal);
	da = sal * 0.1;
	ta = sal * 0.2;
	totsal = sal + ta + da;
	printf("\n The net salary is Rs %.2f", totsal);
}