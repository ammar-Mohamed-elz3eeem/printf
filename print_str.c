#include "main.h"

/**
 * print_str - this will print str to the standard output
 * @args: argument list of variadic function
 * @buff: buff to print data in
 * @buff_count: count of the current integer in buffer
 * Return: current buff count
 */

int print_str(char *buff, va_list args, int buff_count)
{
	char *str;
	int i = 0;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		buff[buff_count] = str[i];
		i++;
		buff_count++;
	}

	return (buff_count);
}
