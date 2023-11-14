#include "main"

/**
 * _printx - hexa conversion
 * @n: parameter for variable
 * Return: count
 */

int _printx(unsigned long int n)
{
	unsigned int t = n;
	long int i, *arr;
	long int c = 0, hex = 16;

	while (n / hex != 0)
	{
		n /= hex;
		c++;
	}
	c++;

	arr = malloc(sizeof(long int) * c);

	i = 0;
	while (i < c)
	{
		arr[i] = t % hex;
		t /= hex;
		i++;
	}

	i = c - 1;
	while (i >= 0)
	{
		if (arr[i] > 9)
			arr[i] = arr[i] + 39;
		_putchar(arr[i] + '0');
		i--;
	}
	free(arr);

	return (c);
}
