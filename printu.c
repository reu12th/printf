#include "main.h"

/**
 * printu - prints an integer
 * @args: int argument
 * Return: number of char printed
 */

int printu(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int t = 10;
	int num, l = n % t, d, ex = 1;
	int  i = 1;

	n /= t;
	num = n;

	if (l < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		l = -l;
		i++;
	}
	if (num > 0)
	{
		while (num / t != 0)
		{
			ex *= t;
			num /= t;
		}
		for (num = n; ex > 0; i++)
		{
			d = num / ex;
			_putchar(d + '0');
			num -= (d * ex);
			ex /= t;
		}
	}
	_putchar(l + '0');

	return (i);
}
