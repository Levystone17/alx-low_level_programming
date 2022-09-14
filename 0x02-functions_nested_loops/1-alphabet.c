#include "main.h"
#include <stdio.h>

/**
*print_alphabet - prints alphabet
*
*Return: always 0;
*
*/

void print_alphabet(void);
{
char c = 'a';
while (c <= 'z')
putchar(c);
c++;
}
/**
*main - check the code for Holberton School students.
*
*Return: Always 0.
*/
int main(void)

{
print_alphabet();
return (0);
}
