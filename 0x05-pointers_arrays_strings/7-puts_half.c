#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char to check
 * Return: 0 (success)
 */
void puts_half(char *str)
{
int string2 = 0, n;
while (str[string2] != '\0')
string2++;
if (string2 + 1 % 2 != '0')
n = (string2 - 1) / 2;
else
n = (string2 / 2);
n++;
for (string2 = n; str[string2] != '\0'; string2++)
_putchar(str[string2]);
_putchar('\n');
}
