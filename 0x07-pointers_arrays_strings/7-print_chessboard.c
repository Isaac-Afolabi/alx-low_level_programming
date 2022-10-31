#include "main.h"
/**
 * print_chessboard - function prints the chessboard then \n
 * @a: pointer to pieces to the print
 * Return: void (success)
 */
void print_chessboard(char (*a)[8])
{
int m, n;
for (m = 0; m < 8; m++)
{
for (n = 0; n < 8; n++)
{
_putchar(a[m][n]);
}
_putchar('\n');
}
}

