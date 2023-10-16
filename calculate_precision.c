#include "main.h"

/**
 * calculate_precision - precision calculation
 * @format: string formatting
 * @j: arguments printed
 * @list: arguments list
 *
 * Return: The precision
 */

int calculate_precision(const char *format, int *j, va_list list)
{
	int curr_j = *j + 1;
	int precision = -1;

	if (format[curr_j] != '.')
		return (precision);

	precision = 0;

	for (curr_j += 1; format[curr_j] != '\0'; curr_j++)
	{
		if (is_digit(format[curr_j]))
		{
			precision *= 10;
			precision += format[curr_j] - '0';
		}
		else if (format[curr_j] == '*')
		{
			curr_j++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*j = curr_j - 1;

	return (precision);
}