#include "main.h"
/**
 * printR13 - converts to rot13
 * @args: printf arguments
 * Return: c
 */
int printR13(va_list args)
{
	int i, j, c = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char xl[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char yl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; xl[j] && !k; j++)
		{
			if (s[i] == xl[j])
			{
				_putchar(yl[j]);
				c++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			c++;
		}
	}
	return (c);
}
