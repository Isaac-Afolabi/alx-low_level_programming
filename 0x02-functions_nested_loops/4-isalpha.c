#include "main.h"
/**
 * _isalpha - function checks if c is a lowercase or uppercase
 * @c: is the int that is used for the argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
return (0);
}
