#include <stdio.h>
    void main ()
    {
 
         int array[10][10];
        int i, j, m;
 
        printf("Enter the order of the matrix\n");
        scanf("%d", &m);
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                if(i==j)
            {
                array[i][j]=1;
            }
            else array[i][j]=0;
            }
        }
         for ( i = 0; i < m; ++i) 
         {
              for ( j = 0; j < m; ++j) 
         {
            printf("%d  ", array[i][j]);
            if (j == m - 1)
                printf("\n");
        }
    }
         }