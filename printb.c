#include "main.h"

/**
 * printb - unsigned int arg is converted to binary
 * @val: argument passed
 * Return: int
 */

int printb(va_list val)
{
	int f = 0, j = 0, x = 1;
	int i, y;
	unsigned int n = va_arg(val, unsigned int);
	unsigned int p;

	i = 0;
	while (i < 32)
	{
		p = ((x << (32 - i)) & n);
		if (p >> (31 - i))
			f = 1;
		if (f)
		{
			y = p >> (31 - i);
			_putchar(y + '0');
			j++;
		}
		i++;
	}
	if (j == 0)
	{
		j++;
		_putchar('0');
	}

	return (j);
}
