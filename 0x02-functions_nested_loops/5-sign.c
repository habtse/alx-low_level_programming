#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints sign with value 1 0 -1
 * @n: int parameter
 * Return: 1 if n is positive 0 if n is 0 -1 if n is negative
*/
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('+');
return (1);
}
}
