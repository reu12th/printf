#include "main.h"

/**
 * printX - hexa conversion (capital)
 * @val: parameter for variable
 * Return: count
 */

int printX(va_list val)
{
	int i, *arr;
	int c = 0, hex = 16;
	unsigned int n = va_arg(val, unsigned int);
	unsigned int t = n;

	while (n / hex != 0)
	{
		n /= hex;
		c++;
	}
	c++;

	arr = malloc(sizeof(int) * c);
	for (i = 0; i < c; i++)
	{
		arr[i] = t % 16;
		t /= 16;
	}
	for (i = c - 1; i >= 0; i--)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 7;
		_putchar(arr[i] + '0');
	}
	free(arr);

	return (c);
}
