#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: parameter int
 * Return: the last value
*/
int print_last_digit(int n)
{
int i;

i = n % 10;
if (n < 0)
{
i = -1 * i;
}
_putchar(i + '0');
return (i);
}
