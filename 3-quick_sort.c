#include "sort.h"

/**
 * quick_sort - function
 * @array: array
 * @size: size
 * Return: return
 */
void quick_sort(int *array, size_t size)
{
	int l = 0, h = size - 1;

	if (size < 2 || !array)
		return;
	rcsrt(array, l, h, size);
}

/**
 * rcsrt - function
 * @array: array
 * @size: size
 * @l: l
 * @h: h
 * Return: return
 */
void rcsrt(int *array, int l, int h, size_t size)
{
	int x = 0;

	if (l < h)
	{
		x = prtion(array, l, h, size);
		rcsrt(array, l, x - 1, size);
		rcsrt(array, x + 1, h, size);
	}
}

/**
 * prtion - function
 * @array: array
 * @size: size
 * @l: l
 * @h: h
 * Return: return
 */
int prtion(int *array, int l, int h, size_t size)
{
	int y = array[h], i = l, j = 0, q = 0;

	for (j = l; j <= h; j++)
	{
		if (array[j] < y)
		{
			q = array[j];
			array[j] = array[i];
			array[i] = q;
			if (i != j)
				print_array(array, size);
			i++;
		}
	}
	q = array[i];
	array[i] = array[h];
	array[h] = q;
	if (array[h] != y)
		print_array(array, size);
	return (i);
}
