#include "main.h"
/**
 * printR13 - converts to rot13
 * @args: printf arguments
 * Return: c
 */
int printR13(va_list args)
{
	int i, j;
	int k = 0, c = 0;
	char *s = va_arg(args, char*);
	char xl[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char yl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	i = 0;
	while (s[i])
	{
		k = 0;
		j = 0;
		while (xl[j] && !k)
		{
			if (s[i] == xl[j])
			{
				_putchar(yl[j]);
				c++;
				k = 1;
			}
		j++;
		}
		if (!k)
		{
			_putchar(s[i]);
			c++;
		}
	i++;
	}
	return (c);
}
