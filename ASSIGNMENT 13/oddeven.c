#include <stdio.h>
void main()
{
   int arr1[10][10];
   int r1,c1;
   int i, j,even=0,odd=0;
   
       printf("\n\n the frequency of odd and even numbers in a given matrix. :\n ");
       printf("-----------------------------------------------------------\n");   
  
   printf("Input number of Rows for the matrix :");
   scanf("%d", &r1);
   printf("Input number of Columns for the matrix :");
   scanf("%d",&c1);  

	 printf("Input elements in the first matrix :\n");
       for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
	           printf("element - [%d],[%d] : ",i+1,j+1);
	           scanf("%d",&arr1[i][j]);
            }
        }    
 	 printf("The matrix is :\n");
	 for(i=0;i<r1;i++)
	 {
	   for(j=0;j<c1 ;j++)
	     printf("   %d",arr1[i][j]);
	    printf("\n");
	 }

    for(i=0; i<r1; i++)
    {
     for(j=0; j<c1; j++)
     {
            if(arr1[i][j]%2==0)
            {
                even++;
            }
            else odd++;
            
            }
	}
   
	printf(" The number of odd numbers in the matrix is %d\n\n",odd);
  
	printf(" The number of even numbers in the matrix is %d\n\n",even);
 
}