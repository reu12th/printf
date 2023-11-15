#include "main.h"

/**
 * printS - prints the string ASCII value of non printable characters.
 * @val: ASCII value.
 * Return: length.
 */

int printS(va_list val)
{
	char *s;
	int i, length = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = s[i];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + _printX(value);
		}
		else
		{
			_putchar(s[i]);
			length++;
		}
	}
	return (length);
}
