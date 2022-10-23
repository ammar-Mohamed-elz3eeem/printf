#include "main.h"

/**
 * printer - print a charchter to the output stream
 * @specefier: charchter to specify which specify argument type
 * @args: argument list of variadic function
 * @buff: buff to print data in
 * @buff_count: count of the current integer in buffer
 * Return: current buff count
 */

int printer(char specefier, va_list args, char *buff, int buff_count)
{
	int i;
	printer_t printers[] = {
	    {'i', print_int},
	    {'d', print_int},
	    {'c', print_char},
	    {'s', print_str},
	    {'b', print_binary},
	    {'u', print_unsigned},
	    {'o', print_octal},
	    {'%', print_precision},
	    {'x', print_hexadecimal},
	    {'\0', NULL}};

	for (i = 0; printers[i].specefier != '\0'; i++)
	{
		if (printers[i].specefier == specefier)
		{
			buff_count = printers[i].printer(buff, args, buff_count);
			return (buff_count);
		}
	}

	return (0);
}
