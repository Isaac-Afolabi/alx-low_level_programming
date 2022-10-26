#include "main.h"
/**
 * string_toupper - functionn changes lowercase to uppercase
 * @s:string
 * Return:char
 */
char *string_toupper(char *s)
{
int b;
b = 0;
while (*(s + b))
{
if (*(s + b) >= 'a' && *(s + b) <= 'z')
*(s + b) -= 'a' - 'A';
b++;
}
return (s);
}

