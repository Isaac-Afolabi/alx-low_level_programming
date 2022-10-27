#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: the line of buffer to print
 * Return: void
 */
void print_line(char *c, int s, int l)
{
int j, k;
for (j = 0; j <= 9; j++)
{
if (j <= s)
printf("%02x", c[l * 10 + j]);
else
printf("  ");
if (j % 2)
putchar(' ');
}
for (k = 0; k <= s; k++)
{
if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
putchar(c[l * 10 + k]);
else
putchar('.');
}
}
/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
int a;
for (a = 0; a <= (size - 1) / 10 && size; a++)
{
printf("%08x: ", a * 10);
if (a < size / 10)
{
print_line(b, 9, a);
}
else
{
print_line(b, size % 10 - 1, a);
}
putchar('\n');
}
if (size == 0)
putchar('\n');
}

