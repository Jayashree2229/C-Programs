#include<stdio.h>

void main()
{
int a=10,b=20;
/*function call*/
swapr(&a,&b);
printf("\na=%d  b=%d",a,b);
}

swapr(int *x,int *y){
int t;
t=*x;
*x=*y;
*y=t;
printf("\nx=%d  y=%d",*x,*y);
}