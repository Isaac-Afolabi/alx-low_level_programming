#include "main.h"
/**
 * _strlen_recursion - function returns the length of string
 * @s: the string
 * Return: int (length)
 */
int _strlen_recursion(char *s)
{
int a = 0;
if (*s)
{
a++;
a += _strlen_recursion(s + 1);
}
return (a);
}

