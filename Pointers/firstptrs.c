#include <stdio.h>

main()
{
    int i=3;
    int *j;

    j=&i;

    printf("\n%u",&i);
    printf("\n%u",j);
    printf("\n%u",&j);
    printf("\n%u",j);
    printf("\n%d",i);
    printf("\n%d",*(&i));
    printf("\n%u",*j);
    
}
