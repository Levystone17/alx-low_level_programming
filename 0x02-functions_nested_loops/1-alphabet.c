#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 * Return: always 0;
 *
 */
void print_alphabet(void)
{
char i = 'a';

while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');

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

