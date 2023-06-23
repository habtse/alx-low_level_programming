#include <stdio.h>
/**
 * fizz_buzz - prints 1 - 100 with fizzbuzz
 * Return: empty
*/
void fizz_buzz(void)
{
    int x;

    for (x = 1; x <=100; x++)
    {
        if (x % 3 == 0 && x % 5 == 0)
        {
            printf("FizzBuzz");
            printf(" ");
        }
        else if (x % 3 == 0)
        {
            printf("Fizz");
            printf(" ");
        }
        else if (x % 5 == 0)
        {
            printf("Buzz");
            printf(" ");
        }
        else 
        {
            printf(x);
            printf(" ");
        }

    }
    printf("\n");
}
