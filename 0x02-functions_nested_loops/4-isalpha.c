#include "main.h"
/**
 * _isalpha - function checks if c is a letter, lowercase or uppercase
 * @c: The character in ASCII code
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <+ 'z'))
	{
		return (1);
	}
	else
		return (0);
}
