#include <stdio.h>
void main()
{
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    if(n%2==0) printf("Even\n");
    else printf("Odd\n");
}