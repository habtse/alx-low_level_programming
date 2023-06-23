#include "main.h"
/**
 * print_line - prints line n times
 * @n: int parameter
 * Return: void
*/
void print_line(int n)
{
    if (n > 0)
    {
      for (; n > 0; n--)
      {
        _putchar('_');
      }  
      _putchar('\n');
    }
    else
    {
        _putchar('\n');
    }
}
