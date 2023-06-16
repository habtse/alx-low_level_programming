#include <stdio.h>
/**
 * main - print numbers combination with space
 * Return: 0 if success
*/
int main(void)
{
int a;

for (a =0; a < 10; a++)
{
putchar(a + '0');
if (a < 9)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
}
return (0);
}
