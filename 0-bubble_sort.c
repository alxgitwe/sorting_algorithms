#include "sort.h"

/**
 * bubble_sort - function
 * @array: array
 * @size: size
 * Return: return
 */
void bubble_sort(int *array, size_t size)
{
	int x;
	size_t h, k;

	if (size < 2)
	{
		return;
	}


	for (h = 0; h <= size; h++)
	{
		if (array[h + 1])
		{
			for (k = 0; k <= size; k++)
			{
				if (array[k + 1])
				{
					if (array[k] > array[k + 1])
					{
						x = array[k];
						array[k] = array[k + 1];
						array[k + 1] = x;
						print_array(array, size);
					}
				}
			}
		}
	}
}
