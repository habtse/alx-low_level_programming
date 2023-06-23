#include "main.h"
/**
 * print_diagonal -prints diagonal line
 * @n:  int parameter
 * Description: prints diagonal
*/
void print_diagonal(int n)
{
int x;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n-1; x++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
