#include "main.h"

/**
 * print_char - this will print char to the standard output
 * @args: argument list of variadic function
 * @buff: buff to print data in
 * @buff_count: count of the current integer in buffer
 * Return: current buff count
 */

int print_char(char *buff, va_list args, int buff_count)
{
	char ch = va_arg(args, int);

	buff[buff_count++] = ch;

	return (buff_count);
}
