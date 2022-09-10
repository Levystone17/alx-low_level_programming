#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-determine if random number is negative, positive or zero
 *
 * return (o) succes
 */

int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is %s\n", n, "positive");
}
else if (n < 0)
{
printf("%d is %s\n", n, "negative");
}
else
{
printf("%d is %s\n", n, "zero");
}
return (0);
}
