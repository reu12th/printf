#include "main.h"

/**
 * printb - unsigned int arg is converted to binary
 * @val: argument passed
 * Return: int
 */

int printb(va_list val)
{
	int f = 0;
	int c = 0;
	int i, m = 1, n;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	i = 0;
	while (i < 32)
	{
		p = ((m << (31 - i)) & num);
		if (p >> (31 - i))
			f = 1;
		if (f)
		{
			n = p >> (31 - i);
			_putchar(n + 48);
			c++;
		}
		i++;
	}
	if (c == 0)
	{
		c++;
		_putchar('0');
	}

	return (c);
}
