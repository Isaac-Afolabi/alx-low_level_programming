#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: pointer to convert
 * Return: un-int n
 */
int _atoi(char *s)
{
int d = 0;
unsigned int n = 0;
int m = 1;
int isi = 0;
while (s[d])
{
if (s[d] == 45)
{
m *= -1;
}
while (s[d] >= 48 && s[d] <= 57)
{
isi = 1;
n = (n * 10) + (s[d] - '0');
d++;
}
if (isi == 1)
{
break;
}
d++;
}
n *= m;
return (n);
}
