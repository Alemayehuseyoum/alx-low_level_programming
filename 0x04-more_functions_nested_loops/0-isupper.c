#include "main.h"

#include <ctype.h>
/**
 * _isupper - returns 1 for uppercase
 *@c: is the parameter
 *Return: positive int if it id uppercase
 */
int _isupper(int c)
{
	if (isupper(c) > 0)
		return (1);
	else
		return (0);
}
