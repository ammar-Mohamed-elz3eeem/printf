#include "main.h"

/**
 * print_octal - print octal number to the stdout
 * @args: argument list of variadic function
 * @buff: buff to print data in
 * @buff_count: count of the current integer in buffer
 * Return: current buff count
 */

int print_octal(char *buff, va_list args, int buff_count)
{
	unsigned int oct, temp, octlen = 0, idx = 0;
	char *stroct;

	oct = va_arg(args, unsigned int);

	if (oct == 0)
		buff[buff_count++] = '0';

	temp = oct;
	while (temp > 0)
	{
		octlen++;
		temp /= 8;
	}
	stroct = malloc(sizeof(char) * octlen + 1);
	temp = oct;
	while (idx < octlen)
	{
		stroct[octlen - idx - 1] = (temp % 8) + '0';
		temp /= 8;
		idx++;
	}
	idx = 0;
	while (idx < octlen)
	{
		buff[buff_count++] = stroct[idx++];
	}

	return (buff_count);
}
