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
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
