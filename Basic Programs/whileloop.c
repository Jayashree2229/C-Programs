#include<stdio.h>
main()
{
char choice='y';

int n;

while(choice=='y')
{
printf("Enter a number");
scanf("%d",&n);
printf("\ndo you want to continue (y/n)");
scanf("%c",&choice);


}
getch();

}