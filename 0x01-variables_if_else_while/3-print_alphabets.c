#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase and uppercase
 * Return: Always 0 (success)
 */
int main(void)
{
int b;
for (b = 'a'; b <= 'z'; b++)
{
putchar(b);
}
for (b = 'A'; b <= 'Z'; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
