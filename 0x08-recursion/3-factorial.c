#include "main.h"

/**
 * factorial - fonction that calculate factorial of given number
 *
 * @n: the given number to calculate
 *
 * Return: 0 for succes and -1 for an error
 */

int factorial(int n)

{
if (n <= 1)
{
return (-1);
}
else

return (n * factorial(n - 1));
}
