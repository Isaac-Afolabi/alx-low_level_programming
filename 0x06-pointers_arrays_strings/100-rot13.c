#include "main.h"
/**
 * rot13 - encodes a string into rot13
 * @s: string to be encoded
 * Return: the address of s
 */
char *rot13(char *s)
{
int m, n;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (m = 0; *(s + m); m++)
{
for (n = 0; n < 52; n++)
{
if (a[n] == *(s + m))
{
*(s + n) = b[m];
break;
}
}
}
return (s);
}
