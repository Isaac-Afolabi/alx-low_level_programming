#include "main.h"
/**
 * _memset - function copies char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
/**
 * _calloc - function allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer (success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
_memset(p, 0, (nmemb * size));
return (p);
}

