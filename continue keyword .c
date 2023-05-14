
    #include<stdio.h>
     int main()  
    {
    int i;
    i=0;
    while(i<=10)
    {
    
     i++;
     if (i%2==1)
     { 
       continue ;
      }
    
     printf("I=%d\n",i);
    }
    return 0;
} 