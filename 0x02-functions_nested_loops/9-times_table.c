#include "main.h"
/**
 * time_table - prints 9 tables
 * Return: void
*/
void times_table(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
k = i * j;
_putchar(k + '0');
}
}
}
