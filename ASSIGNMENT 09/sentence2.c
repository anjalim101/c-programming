#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
  char str[100];
  int ctr, ch, i;

       printf("\n\n Program to Replace lowercase characters by uppercase and vice-versa :\n");
       printf("--------------------------------------------------------------\n");	
      printf("Input the string : ");
       fgets(str, 100, stdin);  

  ctr=strlen(str);
  printf("After Case changing the string  is: ");
  for(i=0; i < ctr; i++)
  {
    ch = islower(str[i]) ? toupper(str[i]) : tolower(str[i]);
    putchar(ch);
   }
   printf("\n\n");

}