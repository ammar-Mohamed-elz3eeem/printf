#include "main.h"
#include <stdio.h>

/**
 * print_precision - this will print char to the standard output
 * @args: argument list of variadic function
 * @buff: buff to print data in
 * @buff_count: count of the current integer in buffer
 * Return: current buff count
 */

int print_precision(char *buff, va_list args, int buff_count)
{
	char precision;
	int i;

	precision = '%';
	printf("I should be called with %d\n", precision);

	buff[buff_count++] = precision;

	return (buff_count);
}
