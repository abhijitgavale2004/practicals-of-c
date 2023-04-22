#include<stdio.h>

int main()
{
   long  int no,count=0;
   printf("enter the number\n");
   scanf("%ld",&no);
   while(no!=0)
  {  no=no/10;
     ++count;
     }
    printf("the digit is %ld",count);
   
     return 0;
    }
  
       
    
  
       
    