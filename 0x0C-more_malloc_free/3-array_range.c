#include "main.h"
/**
 * array_range - function creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array (success)
 */
int *array_range(int min, int max)
{
int *arr, a = 0, t = min;
if (min > max)
return (0);
arr = malloc((max - min + 1) * sizeof(int));
if (!arr)
return (0);
while (a <= max - min)
arr[a++] = t++;
return (arr);
}

