#include "main.h"

/**
 * _puts_recursion - function that prints a string
 *
 * @s: character to print
 *
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{


if (*s == '\0')
return;

else
_putchar(*s);
_puts_recursion(s++);

_putchar('\n');

}
