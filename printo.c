#include "main.h"

/**
 * printo - octal conversion
 * @val: parameter for variable
 * Return: count
 */

int printo(va_list val)
{
	int i, *arr;
	int c = 0, oct = 8;
	unsigned int n = va_arg(val, unsigned int);
	unsigned int t = n;

	while (n / oct != 0)
	{
		n /= oct;
		c++;
	}
	c++;
	arr = malloc(sizeof(int) * c);

	i = 0;
	while (i < c)
	{
		arr[i] = t % oct;
		t /= oct;
		i++;
	}

	i = c - 1;
	while (i >= 0)
	{
		_putchar(arr[i] + '0');
		i--;
	}
	free(arr);

	return (c);
}
