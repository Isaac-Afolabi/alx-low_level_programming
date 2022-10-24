#include "main.h"
/**
 * _strcpy - copy the string pointed including \0 to by src to dest
 * @dest: char to check
 * @src: char to check
 * Return: 0 (success)
 */
char *_strcpy(char *dest, char *src)
{
int m;
for (m = 0; src[m] != '\0'; m++)
dest[m] = src[m];
dest[m] = '\0';
return (dest);
}
