#include "main.h"

/**
 * printx - hexa conversion
 * @val: parameter for variable
 * Return: count
 */

int printx(va_list val)
{
	unsigned int n = va_arg(val, unsigned int);
	unsigned int t = n;
	int i, *arr;
	int c = 0, hex = 16;

	while (n / hex != 0)
	{
		n /= hex;
		c++;
	}
	c++;

	arr = malloc(sizeof(int) * c);

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
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
		i--;
	}
	free(arr);

	return (c);
}
