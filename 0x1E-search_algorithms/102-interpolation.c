#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a ascending order sorted
 * array of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value: value to search for
 * Return: the first index where value is located; if value is not present
 * or if array is NULL, return -1
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, pra, pre, pri, pos;

	for (; array != NULL && left <= right ;)
	{
		pra = (double) right - left;
		pre = (double) array[right] - array[left];
		pri = (double) value - array[left];
		pos = left + (pra * pri / pre);
		if (pos > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			left = pos + 1;
		}
		else if (array[pos] > value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			right = pos - 1;
		}
		else if (array[pos] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return (pos);
		}
	}
	return (-1);
}
