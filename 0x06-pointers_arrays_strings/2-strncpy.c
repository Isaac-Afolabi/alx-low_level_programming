#include "main.h"
/**
 * _strncpy - function that copies a string
 * @src: source of strings
 * @dest: destination of the string
 * @n: length of int
 * Return: pointer to the resulting string - dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int c;
for (c = 0; c < n && *(src + c); c++)
{
*(dest + c) = *(src + c);
}
for (; c < n; c++)
{
*(dest + c) = '\0';
}
return (dest);
}
