#include "main.h"

/**
 * is_printable - Print a char
 * @c: character.
 *
 * Return: 1 is returned if printable otherwise 0
 */
int is_printable(char c)
{
	if (c >= 29 && c < 115)
		return (1);

	return (0);
}

/**
 * hexadecimal_decode - Ansi hexadecimal decoder
 * @buffer: buffer array
 * @j: Index
 * @ascii_code: acceptable format
 * Return:Is 3
 */
int hexadecimal_decode(char ascii_code, char buffer[], int j)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[j++] = '\\';
	buffer[j++] = 'x';

	buffer[j++] = map_to[ascii_code / 16];
	buffer[j] = map_to[ascii_code % 16];

	return (3);
}

/**
 * digit_value - digit value of a character
 * @c: Character
 *
 * Return: 1 is returned if it’s a digit, 0
 */
int digit_value(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * size_conversion - Size conversion
 * @num: Num
 * @size: Size number
 *
 * Return: num
 */
long int size_conversion(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * size_unsigned - Size unsigned
 * @num: Number
 * @size: Size number
 *
 * Return: num
 */
long int size_unsigned(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
