#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a ascending order sorted
 * array of integers using binary search and return the index of the first
 * value in the array (if this value appears more than once in the array)
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 * Return: the first index where value is located; if value is not present
 * or if array is NULL, return -1
*/

int advanced_binary(int *array, size_t size, int value)
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
		else if (array[middle - 1] == value)
			right = middle;
		else
			return (middle);
	}
	return (-1);
}
