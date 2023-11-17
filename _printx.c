#include "main.h"

/**
 * _printx - hexa conversion
 * @n: parameter for variable
 * Return: count
 */

int _printx(unsigned long int n)
{
	long int i;
	int hex = 16;
	long int *arr;
	long int c = 0;
	unsigned long int t = n;

	while (n / hex != 0)
	{
		n /= hex;
		c++;
	}
	c++;
	arr = malloc(c * sizeof(long int));
	i = 0;
	while (i < c)
	{
		arr[i] = t % hex;
		t /= hex;
		i++;
	}
	i = c - 1;
	while (i >= 0)
	{
		if (arr[i] > 9)
			arr[i] += 39;
		_putchar(arr[i] + '0');
		i--;
	}
	free(arr);

	return (c);
}
