#include "main.h"

/**
 * calculate_size - Calculates the size to cast the argument
 * @format: The arguments format
 * @j: List of arguments
 *
 * Return: The precision
 */
int calculate_size(const char *format, int *j)
{
	int curr_j = *j + 1;
	int size = 0;

	if (format[curr_j] == 'l')
		size = S_LONG;
	else if (format[curr_j] == 'h')
		size = S_SHORT;

	if (size == 0)
		*j = curr_j - 1;
	else
		*j = curr_j;

	return (size);
}

