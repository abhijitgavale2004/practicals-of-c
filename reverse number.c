#include<stdio.h>
 int main()
   { 
      int no, rev=0;
       printf("enter the number");
       scanf("%d\n",&no);
        while(no!=0)
        { 
           rev= (rev*10)+(no%10);
           no=no/10;
         }
            printf("=%d",rev);
             return 0;
           }