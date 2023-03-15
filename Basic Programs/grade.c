#include<stdio.h>

main()
{
int m1,m2,m3,m4,m5,a;
printf("Enter marks\n");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

a=(m1+m2+m3+m4+m5)/5;

if(a>=60){
printf("First division");
}
else{
   if(a>=50){ printf("second division"); }
   else{
    if(a>=40) 
    printf("Third division");
    else 
    printf("Fail");
   }
}


}


/*
>60 first
50 and 60 second
40 and 50 third
<40 fial


*/