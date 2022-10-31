#include "main.h"
/**
 * _strspn - function gets the length of a prefix substring
 * @s: initial segment of
 * @accept: consist only of bytes
 * Return: how many number of bytes?
 */
unsigned int _strspn(char *s, char *accept)
{
int z = 0, a, b;
for (a = 0; s[a] != '\0'; a++)
{
if (s[a] != 32)
{
for (b = 0; accept[b] != '\0'; b++)
{
if (s[a] == accept[b])
z++;
}
}
else
return (z);
}
return (z);
}

