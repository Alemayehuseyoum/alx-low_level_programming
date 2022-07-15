#include "main.h"
#include <string.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: the maximum number of characters to be appended
 * Return: concatinated string
*/

char *_strncat(char *dest, char *src, int n)

{
return (strncat(dest, src, n));

}
