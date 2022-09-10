#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("if the number is greater than 0: %c \n", "is positive");
}
else if (n < 0)
{
printf("if the number is less than 0: %c \n", "is negatif");
}
else
{
printf("if the number is 0: %c \n", "is zero");
}
return (0);
}
