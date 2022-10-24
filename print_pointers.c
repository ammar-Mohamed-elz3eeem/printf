#include "main.h"

/**
 * print_pointer - prints any pointer to the stdout
 * @args: argument list of variadic function
 * @buff: buff to print data in
 * @buff_count: count of the current integer in buffer
 * Return: current buff count
 */

int print_pointer(char *buff, va_list args, int buff_count)
{
	int idx = 0;
	__uint64_t ptr = (__uint64_t)va_arg(args, void *);
	char *addedstr;

	if (ptr == 0)
		addedstr = "(nil)";
	else
		addedstr = _strcat("0x", hex_converter(ptr));

	if (addedstr == NULL)
		return (buff_count);

	while (addedstr[idx] != '\0')
		buff[buff_count++] = addedstr[idx++];

	return (buff_count);
}
