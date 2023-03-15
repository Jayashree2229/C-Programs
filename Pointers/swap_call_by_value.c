#include<stdio.h>

void main()
{
int a=10,b=20;
/*function call*/
swapv(a,b);
printf("\na=%d  b=%d",a,b);
}

swapv(int x,int y){
int t;
t=x;
x=y;
y=t;
printf("\nx=%d  y=%d",x,y);
}