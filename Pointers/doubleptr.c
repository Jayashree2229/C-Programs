#include <stdio.h>
void main(){
  int i=3,*j,**k;

  j=&i;
  k=&j;

  printf("\n%u",&i);
  printf("\n%u",j);
  printf("\n%u",*k);
  printf("\n%u",&j);
  printf("\n%u",k);
  printf("\n%u",j);
  printf("\n%u",k);
  printf("\n%d",i);
  printf("\n%d",*(&i));
  printf("\n%d",*j);
  printf("\n%d",**k);

}