#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000],ch;  
    int  a,i,j,k,l,count=0,n;
    int cnt[100];
 
    printf("Enter  the string : ");
    gets(s);
     
    for(j=0;s[j];j++);
	 n=j; 
    
	printf(" frequency count character in string:\n");
 
    for(i=0;i<n;i++)  
    {
     	count=1;
    	if(s[i])
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	     	cnt[i]=count;
	      }  
    	}
    }
    	 for ( k= 0; k < n; ++k) 
        {
 
            for (l = k + 1; l < n; ++l)
            {
 
                if (cnt[k] > cnt[l]) 
                {
 
                    a =  cnt[k];
                    ch=s[k];
                    cnt[k] = cnt[l];
                    s[k]=s[l];
                    cnt[l] = a;
                    s[l]=ch;
 
                }
            }
        }
	     for(int o =0;o<i;o++)
	     {
	         if (s[o])
	         {
	         if (cnt[o]!=0)
	         {
	         	     
	      printf(" '%c' = %d \n",s[o],cnt[o]);}}
    }
       
    return 0;
}