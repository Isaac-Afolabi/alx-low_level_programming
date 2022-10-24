#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char to check
 * Description: this program will return the length of a string
 * Return: int x (success)
 */
int _strlen(char *s)
{
int x = 0;
while (s[x] != '\0')
{
x++;
}
return (x);
}
