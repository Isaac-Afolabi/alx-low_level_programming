#include "main.h"
/**
 * puts2 - function prints every other character of a string with 1st char, /n
 * @str: char to check
 * Return: 0 (success)
 */
void puts2(char *str)
{
int string1;
for (string1 = 0; str[string1] != '\0'; string1++)
if (string1 % 2 == 0)
_putchar(str[string1]);
_putchar('\n');
}
