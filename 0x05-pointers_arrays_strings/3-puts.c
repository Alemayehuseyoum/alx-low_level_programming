#include "main.h"
/**
 * _puts - prints a string
 * @str: a pointer to an int
 * Return: Answer
 */

void _puts(char *str)
{
	char *a;
	int b;

	a = str;

	for (b = 0; a[b]; b++)
	{
		puts (a[b]);
	}
	puts ('\n');
}
