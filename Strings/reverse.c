#include<stdio.h>
#include<string.h>
int main()
{
 
    char str[50],*revStr;
 
    printf("\nEnter Any String Without Space:\n\n ");
    scanf("%s",str);

    revStr = strrev(str);
    printf("\nReverse string is :\n\n %s",revStr);
    return 0;
}