#include "main.h"
/**
 * _islower - function checks lowercase character
 * @c: The character in ASCII code
 * Return: 1 for lowercase. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
