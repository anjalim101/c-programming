#include<stdio.h>
void main(void)
{
	float P=0, T=0, R=0,interst=0;
	printf("\n Enter the principle amount Rs");
	scanf("%f", &P);
	printf("\n Enter the interest rate : ");
	scanf("%f", &R);
	printf("\n Enter the time period in years : ");
	scanf("%f", &T);
	interst = (P*R*T) / 100.0;
	printf("\n the interst is %.2f", interst);

}