#include<stdio.h>

int main()
{
   int no,rem,flag=0;
   printf("enter the number\n");
  scanf("%d",&no);
  while(no!=0)
   {
      rem = no%10;
      no =  no/10;
    
    if(rem==0)
     { 
       flag=1;
       break;
    }
  }
        
        if(flag)
         {  
             printf("number is duck");
          }
        else
        {  
            printf("number is not duck");
          }
     return 0;
    }
  
       
    
  
       
    