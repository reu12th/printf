#include "main.h"

/**
 * printr - prints a string in reverse
 * @args: type struct va_arg where is allocated printf arguments
 * Return: string
 */

int printr(va_list args)
{

	char *s = va_arg(args, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";

	while (s[j] != '\0')
		j++;

	i = j - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	return (j);
}
