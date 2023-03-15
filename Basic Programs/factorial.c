#include<stdio.h>

int main()
{
  
 unsigned long int fact=1;
  int i,num;
  
 printf("Enter The Number :");
  scanf("%d",&num);
  
 for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    
 printf("\nFactorial is = %llu\n",fact);
    return 0;

}


