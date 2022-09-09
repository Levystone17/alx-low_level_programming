#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("size of a char : %i byte(s)\n ", (unsigned long) sizeof(a));
printf("size of an int : %i byte(s)\n ", (unsigned long) sizeof(b));
printf("size of a long int : %i byte(s)\n ", (unsigned long) sizeof(c));
printf("size of a long long int : %i byte(s) \n ", (unsigned long) sizeof(d));
printf("size of a float : %i byte(s)\n ", (unsigned long) sizeof(e));
return (0);
}