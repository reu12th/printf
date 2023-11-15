#include "main.h"

/**
 * char_print - prints a character
 * @val: arg for char
 * Return: 1 on success
 */

int char_print(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
