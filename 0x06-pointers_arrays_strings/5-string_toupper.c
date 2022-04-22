#include "main.h"

/**
 *string_toupper -  that changes all lowercase letters of a string to uppercase
 *@*: string to be upper case
 *
 *Return: upper case
 */

char *string_toupper(char *str)
{
	int a;

	while (str[a] != '\0')
	{
		if (str[a] > 96 && str[a] < 123)
		{
			str[a] -= 32;
		}
		a++;
	}

return (str);
}
