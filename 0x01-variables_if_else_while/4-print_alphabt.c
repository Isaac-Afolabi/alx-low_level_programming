#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabets except q and e
 * Return: Always 0 (success)
 */
int main(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
else
{
}
putchar('\n');
return (0);
}
}
