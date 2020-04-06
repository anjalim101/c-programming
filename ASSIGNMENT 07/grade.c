#include<stdio.h>

void main(void)
{
	float mark;
	printf("\n enter the students mark : ");
	scanf("%f",&mark);
	if (mark >= 90)
	{
		printf("\n The Grade is A");
	}
	else
		if (mark >= 90)
		{
			printf("\n The Grade is A");
		}
		else
			if (mark >= 80)
			{
				printf("\n The Grade is B");
			}
			else
				if (mark >= 70)
				{
					printf("\n The Grade is C");
				}
				else
					if (mark >= 60)
					{
						printf("\n The Grade is D");
					}
					else
					{

						printf("\n The grade is F");
					}
}