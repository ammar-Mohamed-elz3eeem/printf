#include "main.h"
#include <stdio.h>

/**
 * _printf - print chars to stdout in formatted way
 * @format: string of fomatted chars to be printed
 * Return: 1 if printing is successful
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int buff_count = 0;
	va_list args;
	char buffer[10000];
	int prev_buff_count;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] != '\0')
			{
				prev_buff_count = printer(format[i], args, buffer, buff_count);
				if (prev_buff_count == 0)
				{
					i--;
					buff_count = print_letter(format[i], buffer, buff_count);
				}
				else
				{
					buff_count = prev_buff_count;
				}
			}
		}
		else
		{
			buffer[buff_count] = format[i];
			buff_count++;
		}
		i++;
	}
	va_end(args);
	write_buffer(buffer, buff_count);
	return (buff_count);
}
