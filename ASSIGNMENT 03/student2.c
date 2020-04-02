#include<stdio.h>
void main(void)
{
	float eng, mat, phy, che,sum,avg;
	char name[12];
	printf("\nEnter Students name : ");
	scanf("%s", &name);
	printf("\nEnter the marks for following subjects:\n\n 1. English : ");
	scanf("%f", &eng);
	printf("\n 2. Mathematics : ");
	scanf("%f", &mat);
	printf("\n 3. Physics : ");
	scanf("%f", &phy);
	printf("\n 4. Chemistry : ");
	scanf("%f", &che);
	sum = eng + mat + phy + che;
	avg = sum / 4.0;
	printf("\n\n\n\n**********************\n\n\n The average mark is %.2f",avg);
}