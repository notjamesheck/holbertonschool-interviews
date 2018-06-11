#include "search_algos.h"

/**
 * binary_search - look for a given value using binary search
 * @array: sorted data in array structure
 * @size: length of array
 * @value: data to be searched for in array
 * Return: integer
*/

int binary_search(int *array, size_t size, int value)
{
	int lower = 0;
	int upper = size - 1;
	int mid = 0;
	int mid_value = 0;
	int i = 0;

	if (array == NULL)
		return (-1);

	do {
		i = lower;
		printf("Searching in array: ");

		while (i <= upper)
		{
			if (i > lower)
			{
				printf(", ");
			}
			printf("%d", array[i]);
			i++;
		}
		printf("\n");

		mid = (lower + upper) / 2;
		mid_value = array[mid];

		if (mid_value < value)
		{
			lower = mid + 1;
		}
		else if (mid_value > value)
		{
			upper = mid;
		}
		else if (mid_value == value)
		{
			return (mid);
		}
		else
		{
			return (-1);
		}
	} while (lower <= upper);

	return (-1);
}
