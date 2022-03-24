#include "main.h"
#include <string.h>

/**
 * _puts - print text
 * @str: char pointer
 * Return: void 
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{	
		_putchar('%c',i);
	}
}

