#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
int num1, m, product;
for (num1 = 0; num1 <= 9; num1++)
{
_putchar('0');
for (m = 1; m <= 9; m++)
{
_putchar(',');
_putchar(' ');
product = num1 * m;
if (product <= 9)
_putchar(' ');
else
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
_putchar('\n');
}
}
