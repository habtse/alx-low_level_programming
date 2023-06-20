#include <stdio.h>
#include "main.h"
/**
 * _isalpha - returns 1 if its alphabet otherwise returns 0
 *  @c: prameter c int value
 * Return:  int if success
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
