#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @n: function to copy
 * @src: bytes from memory area
 * @dest: to the memory area
 * Return: a pointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int b = 0;
while (b < n)
{
dest[b] = src[b];
b++;
}
return (dest);
}
