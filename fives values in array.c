
    #include<stdio.h>
     int main()  
    {
    int a[5],i,sum=0;
    printf(" enter the fives element in array\n ");
    for (i=0;i<5;i++)
    {  scanf("%d",&a[i]);
    }
     printf(" display the values in array\n");
     for(i=0;i<5;i++)
    { scanf("%d",&a[i]);
     sum = sum +a[i];
     }
    printf("sum of all element %d\n",sum);
    
     
    return 0;
} 