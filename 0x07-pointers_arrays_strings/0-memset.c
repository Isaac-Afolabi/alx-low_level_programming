#include "main.h"
/**
 * _memset - fill the first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @n: bytes of the memory area pointed to by s
 * @s: with the constant byte b
 * @b: the memory area pointer
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a = 0;
while (a < n)
{
s[a] = b;
a++;
}
return (s);
}
