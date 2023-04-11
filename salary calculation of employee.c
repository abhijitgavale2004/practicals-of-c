
#include <stdio.h>

int main() 
{
  int bs,da,hra,totals;
  printf("\n enter the the basic salary");
  scanf("%d",&bs);
  da=(bs*30)/100;
  hra=(bs*30)/100;
  totals=da+hra+bs;
  printf("Totals salary : %d\n",totals);
  
    return 0;

}


   