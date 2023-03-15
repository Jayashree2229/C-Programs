/*Armstrong Number :- An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371
check 371 then divide by 10 we got 371/10=1 .cube of 1 is 1 store this result and again divide by 10 we got 37/10=7 . cube of 7 is 343 store and add to previously got result 1 so now its become 344  ,again divide by 10 we got 3/10=3 cube of 3 is 27 ,Now again add 27+344=371
so the Number is Armstrong Number */

#include<stdio.h>
int main()
{

   int n, n1, rem, num=0;
   
   while(1)
   {
   printf("Enter a Positive Integer To Check For Armstrong : \n");
   scanf("%d", &n);
  
   n1=n;
  
   while(n1!=0)
   {
       rem=n1%10;
       num+=rem*rem*rem;
       n1/=10;
   }
   if(num==n)
     printf("\n%d Is An Armstrong Number.\n\n",n);
   else
     printf("\n%d IsNot an Armstrong Number.\n\n",n);
    }
    return 0; 
}





