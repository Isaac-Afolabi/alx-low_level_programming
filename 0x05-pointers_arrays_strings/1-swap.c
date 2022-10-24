#include "main.h"
/**
 * swap_int - swaps the value of integers a and b
 * @a: first integer
 * @b: second integer
 * Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
int g;
g = *a;
*a = *b;
*b = g;
}
