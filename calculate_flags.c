#include "main.h"

/**
 * calculate_flags - Active flags for output
 * @format: Formatted string for arguments output
 * @i: take a parameter.
 * Return: Flags:
 */
int calculate_flags(const char *format, int *i)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */
	int j, curr_j;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_j = *j + 1; format[curr_i] != '\0'; curr_j++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
			if (format[curr_j] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}

		if (FLAGS_CH[j] == 0)
			break;
	}

	*j = curr_j - 1;

	return (flags);
}

