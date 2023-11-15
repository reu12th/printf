#include "main.h"

/**
 * str_print - prints a string
 * @val: arg for str
 * Return: string's length
 */

int str_print(va_list val)
{
	char *s;
	int i;
	int len;

	s = va_arg(val, char *);

	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);

		i = 0;
		while (i < len)
		{
			_putchar(s[i]);
			i++;
		}

		return (len);
	}
	else
	{
		len = _strlen(s);
		i = 0;
		while (i < len)
		{
			_putchar(s[i]);
			i++;
		}

		return (len);
	}
}
