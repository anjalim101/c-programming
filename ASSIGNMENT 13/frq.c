#include <stdio.h>
void main(){
   char str[100],choice;
   int i,ctr=0;
   
       printf("\n\nFind the Frequency of Characters :\n");
       printf("--------------------------------------\n");	
	   
	printf("Input the string : ");
    fgets(str,100,stdin);
	
   printf("Input the character to find frequency: ");
   scanf("%c",&choice);
   for(i=0;str[i]!='\0';++i)
   {
       if(choice==str[i])
           ++ctr;
   }
   printf("The frequency of '%c' is : %d\n\n", choice, ctr);
}