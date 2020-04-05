#include<stdio.h>

void main(void)
{
	int no, newno, num;
	printf("\n Enter the number : ");
	scanf("%d", &no);
	newno = no;
	do
	{
		num = newno;
		newno -=1;
		printf("\n %d - 1 = %d", num, newno);
	} while (newno > 0);

}