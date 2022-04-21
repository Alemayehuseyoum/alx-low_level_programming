#include "main.h"

/**
 * reverse_array - that reverses the content of an array of integers
 * @a: array to be reversed
 * @n: the number of elements of the array
 * Return: concatinated string
*/

void reverse_array(int *a, int n)

{
int i, temp;

for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
