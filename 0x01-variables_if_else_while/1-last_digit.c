#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:'the program assign random number for n'
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 5)
printf("Last digit of %d is %s and is greater than 5\n", n, "8");
else if (n < 6 && n != 0)
printf("Last digit of %d is %s and is less than 6 and not 0\n", n, "-8");
else
printf("Last digit of %d is 0  and is 0\n", n);
return (0);
}
