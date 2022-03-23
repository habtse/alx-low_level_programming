#include "main.h"

/**
 * _isupper - check whether the letter is uppercase or not
 * @c: the number to be tested
 *
 * Return: 0 or 1.
 */
int _isupper(int c)
{
	if (c >= 65 && c =< 90)
	{
		return (1);
	}
	
	return (0);
}
