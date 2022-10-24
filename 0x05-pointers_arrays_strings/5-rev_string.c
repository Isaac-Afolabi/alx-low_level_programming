#include "main.h"
/**
 * rev_string - reverses a string
 * _putchar - print each character
 * @s: the used string reference pointer
 * @s: char to check
 * Description: this function reverses a string
 * Return: 0 (success)
 */
void rev_string(char *s)
{
int x = 0, y, z;
char a;
while (s[x] != '\0')
{
x++;
}
z = x - 1;
for (y = 0; z >= 0 && y < z; z--, y++)
{
a = s[y];
s[y] = s[z];
s[z] = a;
}
}

