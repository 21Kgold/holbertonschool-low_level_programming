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
	int left = 0, right = 0;

	for (; array != NULL && left <= (int) size ;)
	{
		if (value <= right || right > (int) size)
		{
			printf("Value found between indexes [%d] and [%d]\n", left, right);
			for (; left <= right; left++)
			{
				printf("Value checked array[%d] = [%d]\n", left, array[left]);
				if (left == value)
					return (left);
				if (left == (int) size - 1)
				{
					return (-1);
				}
			}
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", right, array[right]);
			left = right;
			right += sqrt((int) size);
		}
	}
	return (-1);
}
