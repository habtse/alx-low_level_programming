#include "main.h"

/**
 * _isupper - check whether the letter is uppercase or not
 * Return: 0 or 1.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else 
		return (0);
}
