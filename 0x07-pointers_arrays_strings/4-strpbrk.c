#include"main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s:first occurrence in the string
 * @accept: matches one of the bytes, or NULL if no such byte exists
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
int d;
while (*s)
{
for (d = 0; accept[d]; d++)
{
if (*s == accept[d])
return (s);
}
s++;
}
return (NULL);
}

