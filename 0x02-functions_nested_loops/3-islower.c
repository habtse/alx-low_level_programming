#include <stdio.h>
#include "main.h"
/**
 * _islower - prints 1 if it is lower
 * @c: c is int parameter
 * Return: 0 if success
*/
int _islower(int c)
{
    if (c < 97)
    {
    return (0);
    }
    else
    {
    return(1);
    }
}
