#include "main"
/**
 * print_alphabet_x10 - function to print abc...z ten times
 * Return: 0
 */
void print_alphabet_x10(void)
{
char p, char i;
for (i = 0; i <= 9; i++)
{
for (p = 'a'; p <= 'z'; p++)
{
_putchar(p);
}
_putchar('\n');
}
}
