#include <stdio.h>
#include <string.h>

void main()
{
	/*Write a Program to Reverse a String in C Using Loop */

	char str[100], temp;
	int i, j = 0;

	printf("Enter The String: ");
	gets(str);

	i = 0;
	j = strlen(str) - 1;

	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}

	printf("\nReverse a String Is: %s\n\n", str);

	return (0);
}