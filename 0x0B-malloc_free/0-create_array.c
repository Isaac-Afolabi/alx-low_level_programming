#include "main.h"
#include <stdlib.h>
/**
 * create_array - fn creates array chars, function inits with a specific char.
 * @size: array size
 * @c: the initial value
 * Return: a pointer to the array, else NULL
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int a;
if (size == 0)
return (NULL);
array = (char *)malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (a = 0; a < size; a++)
array[a] = c;
return (array);
}

