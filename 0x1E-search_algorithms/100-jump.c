#include "search_alogs.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where `value` is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, jump;
	size_t step = sqrt(size)

	if (array == NULL || size == 0)
		return (-1);

	for (a = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array [%ld] = [%d]\n", jump, array[jump]);
		a = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a, jump);

	jump = jump > size - 1 ? jump : size - 1;
	for (; a < jump && array[a] < value; a++)
		printf("Value checked array [%ld] = [%d]\n", a, array[a]);
	printf("Value checked array [%ld] = [%d]\n", a, array[a]);

	return (array[a] == value ? (int)a : -1);
}
