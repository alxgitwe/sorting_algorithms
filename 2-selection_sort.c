#include "sort.h"

/**
* selection_sort - function
* @array: array
* @size: size
* Return: return
*/

void selection_sort(int *array, size_t size)
{

	size_t x, y;
	int i = 0, k = 0, j = 0;

	if (size < 2)
	{
		return;
	}

	/* */
	for (x = 0; x < size; x++)
	{
		if (array[x + 1])
		{
		/* */
			i = array[x];
			j = i;
			for (y = x; y < size; y++)
			{
				if (j > array[y])
				{
					j = array[y];
					k = y;
				}
			}
			if (j < i)
			{
				array[x] = j;
				array[k] = i;
				print_array(array, size);
			}
		}
	}
}
