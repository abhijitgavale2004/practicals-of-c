#include<stdio.h>

int main()
{
   int no,i,sum=0,rem;
    printf("enter the number\n");
    scanf(" %d",&no);
    i=1;    
    while(i<=(no/2))
    {
      rem= no%i;
     if(rem==0)
     {   
      sum=sum+i;
      i++;
      }
    }
     if (sum==no)
     { printf("number is perfect");
       }
     else
     { printf("number is not perfect");
    }
     return 0;
    }
       
