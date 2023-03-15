#include <stdio.h>
#include <string.h>

/*Write a program to check whether a string is palindrome or not */

void main()
{
	while (1)
	{
		char string1[20];
		int i, length;
		int flag = 0;

		printf("\n\nEnter a String to Check Palindrome String: ");
		scanf("%s", string1);

		length = strlen(string1);

		for (i = 0; i < length; i++)
		{
			if (string1[i] != string1[length - i - 1])
			{
				flag = 1;
				break;
			}
		}

		if (flag)
		{
			printf("\n\n%s Is Not a Palindrome String\n", string1);
		}
		else
		{
			printf("\n\n%s Is Palindrome String\n", string1);
		}
	}

	return 0;
}