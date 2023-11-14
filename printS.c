#include "main.h"

/**
 * printS - prints the string ASCII value of non printable characters.
 * @val: ASCII value.
 * Return: length.
 */

int printS(va_list val)
{
	char *s;
	int i, v;
	int len = 0;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len += 2;
			v = s[i];
			if (v < 16)
			{
				_putchar('0');
				len++;
			}
			len += _printX(v);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
		i++;
	}
	return (len);
}
