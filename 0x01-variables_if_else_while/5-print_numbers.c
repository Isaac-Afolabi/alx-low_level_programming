#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 * Description: prints all single digit numbers of base ten
 * Return: Always 0 (success)
 */
int main(void)
{
int p;
for (p = 0; p < 10; p++)
{
printf("%d", p);
}
putchar('\n');
return (0);
}
