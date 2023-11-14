#include "main.h"

/**
 * _printX - prints an hexadecimal number.
 * @n: number to print.
 * Return: count.
 */

int _printX(unsigned int n)
{
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
			arr[i] = arr[i] + 7;
		_putchar(arr[i] + '0');
		i--;
	}
	free(arr);

	return (c);
}
