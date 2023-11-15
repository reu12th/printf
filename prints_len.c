#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: char to be checked
 * Return: i
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}

/**
 * _strlenc - returns the length of a string but for constant char.
 * @s: char to be checked
 * Return: i
 */
int _strlenc(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
