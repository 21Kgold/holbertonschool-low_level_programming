#include "search_algos.h"

/**
 * binary_search - searches for a value in ab ascendant sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 * Return: the first index where value is located; if value is not present
 * or if array is NULL, return -1
*/

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = (int) size - 1, middle, to_print;

	if (array == NULL)
		return (-1);
	for (; right >= left ;)
	{
		printf("Searching in array: ");
		for (to_print = left; to_print <= right ; to_print++)
		{
			printf("%d", array[to_print]);
			if (to_print != right)
				printf(", ");
			else
				printf("\n");
		}
		middle = (left + right) / 2;
		if (array[middle] < value)
			left = middle + 1;
		else if (array[middle] > value)
			right = middle - 1;
		else
			return (middle);
	}
	return (-1);
}
