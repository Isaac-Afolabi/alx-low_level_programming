#include"main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s:first occurrence in the string
 * @accept: matches one of the bytes, or NULL if no such byte exists
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int a, b;
for (a = 0; *(s + a) != '\0'; a++)
{
for (b = 0; *(accept + b) != '\0'; b++)
{
if (*(s + a) == *(accept + b))
return (s + a);
}
}
return ('\0');
}
