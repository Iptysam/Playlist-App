#include <stdio.h>
#include "main.h"

/**
 * factorial - gets factorial of n
 * @n: integer
 * Return: Success 1, On error -1
 */

int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}

