#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints all alphabets in order
 * Return: void
*/
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
