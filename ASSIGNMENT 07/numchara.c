#include<stdio.h>

void main(void)
{

		float num;
		printf("\nEnter a number: ");
		scanf("%f", &num);
		if (num >= 0.0) {
			if (num == 0.0)
				printf("\nYou entered 0.");
			else
				printf("\nYou entered a positive number.");
		}
		else
			printf("\nYou entered a negative number.");
		
}