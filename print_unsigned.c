#include "main.h"

/**
 * print_unsigned - print unsigned number to the stdout
 * @args: argument list of variadic function
 * @buff: buff to print data in
 * @buff_count: count of the current integer in buffer
 * Return: current buff count
 */

int print_unsigned(char *buff, va_list args, int buff_count)
{
	unsigned int num;
	unsigned int tens = 1;
	unsigned int temp;

	num = va_arg(args, unsigned int);
	temp = num;

	while (temp > 9)
	{
		tens *= 10;
		temp /= 10;
	}
	temp = num;
	while (tens > 0)
	{
		buff[buff_count++] = '0' + (temp / tens);
		temp %= tens;
		tens /= 10;
	}

	return (buff_count);
}
