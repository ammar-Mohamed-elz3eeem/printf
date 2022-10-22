#include "main.h"

/**
 * print_precision - this will print char to the standard output
 * @buff: buff to print data in
 * @buff_count: count of the current integer in buffer
 * Return: current buff count
 */

int print_precision(char *buff, __attribute__((unused)) va_list args, int buff_count)
{
	char precision;

	precision = '%';
	buff[buff_count++] = precision;

	return (buff_count);
}
