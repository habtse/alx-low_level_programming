#include "main.h"
/**
 * more_numbers - prints 0-14 ten times
 * Description: return void 
 */
void more_numbers(void)
{
int x, y;
x=10;
while (x)
{
for (x = 0; x < 15; x++)
{
_putchar(x + '0');
}
_putchar('\n');
}
}
