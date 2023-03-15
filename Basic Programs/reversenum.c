#include<stdio.h>

int main() {

 
  int number, reminder, reverse = 0;

  printf("Enter Any Number to be Reversed :\n");

  scanf("%d", & number);

  for (; number != 0; number = number / 10) {

    reminder = number % 10;

    reverse = reverse * 10 + reminder;

  }

  printf("\nReverse a Number is : %d", reverse);