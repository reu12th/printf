#include "main.h"

/**
 * printd - prints an integer
 * @args: int argument
 * Return: number of char printed
 */

int printd(va_list args)
{
	int n = va_arg(args, int);
	int t = 10;
	int num, l = n % t, digit, exp = 1, i = 1;

	n = n / t;
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
			exp *= t;
			num /= t;
		}
		for (num = n; exp > 0; i++)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num -= (digit * exp);
			exp /= t;
		}
	}
	_putchar(l + '0');

	return (i);
}
