#include "main.h"
/**
 * _strchr - function locates a character in a string
 * @c: occurrence of the character
 * @s: in the string, s
 * Return: a pointer to the first occurrence of the character, c (NULL)
 */
char *_strchr(char *s, char c)
{
do {
if (*s == c)
return (s);
} while (*s++);
return (0);
}
