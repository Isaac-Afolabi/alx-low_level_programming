#include "main.h"
/**
 * _strstr - function locates a substring
 * @haystack: the longer string to search
 * @needle: the first occurrence of the substring
 * Return: a pointer to substring or Null if it not found
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int a = 0, b = 0;
while (haystack[a])
{
while (needle[b] && (haystack[a] == needle[0]))
{
if (haystack[a + b] == needle[b])
b++;
else
break;
}
if (needle[b])
{
a++;
b = 0;
}
else
return (haystack + a);
}
return (0);
}

