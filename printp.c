#include "main.h"

/**
 * printp - prints a pointer
 * @val: value.
 * Return: counter.
 */

int printp(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int g;
	int h;
	int i;

	p = va_arg(val, void *);
	if (p == NULL)
	{
		i = 0;
		while (s[i] != '\0')
		{
			_putchar(s[i]);
		}
		return (i);
	}

	g = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	h = _printx(g);

	return (h + 2);
}
