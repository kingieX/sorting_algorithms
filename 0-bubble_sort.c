#include "sort.h"

/**
 * swap_ints - function that swap two integer
 * @a: First integer to be swapped
 * @b: Second integer to be swapped
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
	}

/**
 * bubble_sort - function trhat sort an array of integers.
 * @array: Array of integers to be sort.
 * @size: Size of the array.
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bub = false;

	if (array == NULL || size < 2)
		return;

	while (bub == false)
	{
		bub = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bub = false;
			}
		}
		len--;
	}
}
