#include <stdio.h>
/**
 * main- program that prints all possible combinations of single-digit numbers.
 *
 * Return: 0 on success.
 */

int main(void)

{
int i = '0';
for ((i = 0); i <= 9; i++)
{
putchar('i' + '0');
i++;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}

