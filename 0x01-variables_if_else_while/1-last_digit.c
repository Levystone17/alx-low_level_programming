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
return (0);
}
