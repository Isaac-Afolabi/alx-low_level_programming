#include <stdio.h>
/**
 * main - Entry point
 * Description: prints char below ten
 * Return: Always 0 (success)
 */
int main(void)
{
int b;
for (b = '0'; b <= '9'; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
