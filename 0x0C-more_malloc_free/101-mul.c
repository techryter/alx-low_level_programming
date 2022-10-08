#include "main.h"
#include <stdlib.h>

/**
 * _print - move a string one place to the left an dprints the string.
 * @str: string to be moved
 * @l: size of the string
 *
 * Return: void
 */

void _print(char *str, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (str[i] != '0')
			j = 1;
		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and places te answer into dset
 * @n: char to be multiplied
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dset: destination of multiplication
 * @dset_index: highest index to start addition
 *
 * Return: pointer to dset, or NULL on failure
 */

char *mul(char n, char *num, int num_index, char *dset, int dset_index)
{
	int j, k, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (j = num_index, k = dset_index; j >= 0; j--, k--)
	{
		mul = (n - '0') * (num[j] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dset[k] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dset[k] = add % 10 + '0';
	}
	for (addrem += mulrem; k >= 0 && addrem; k--)
	{
		add = (dset[k] - '0') + addrem;
		addrem = add / 10;
		dset[k] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dset);
}
/**
 * check_for_digits - checks the arguments to ensure they are digits
 * @av: pointer to arguments
 *
 * Return: 
