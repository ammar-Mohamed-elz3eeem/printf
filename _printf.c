#include "main.h"

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

	if (!format)
		return (-1);

	va_start(args, format);

	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (buff_count == printer(format[i + 1], args, buffer, buff_count))
			{
				buff_count = print_letter(format[i], buffer, buff_count);
			}
			else
			{
				i++;

				if (format[i] != '\0')
				{
					buff_count = printer(format[i], args, buffer, buff_count);
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
