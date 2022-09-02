#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 * Return: the first index where value is located; if value is not present
 * or if array is NULL, return -1
*/

int jump_search(int *array, size_t size, int value)
{
	int left = 0, right = 0, step = sqrt((int) size);

	for (; array != NULL && left < (int) size ;)
	{
		if (value <= array[right] || right >= (int) size)
		{
			printf("Value found between indexes [%d] and [%d]\n", left, right);
			for (; left <= right ; left++)
			{
				printf("Value checked array[%d] = [%d]\n", left, array[left]);
				if (array[left] == value)
					return (left);
				if (array[left] == ((int) size - 1) || value < array[left + 1])
					return (-1);
			}
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", right, array[right]);
			left = right;
			right += step;
		}
	}
	return (-1);
}
