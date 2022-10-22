#include "main.h"
#include <stdio.h>

/**
 * print_binary - unsigned int argument is converted to binary
 * @args: argument list of variadic function
 * @buff: buff to print data in
 * @buff_count: count of the current integer in buffer
 * Return: current buff count
 */

int print_binary(char *buff, va_list args, int buff_count)
{
	unsigned int bin;
	unsigned int temp = 0;
	char binary[255];
	int idx = 0;
	int bin_len;

	bin = va_arg(args, unsigned int);
	temp = bin;

	while (temp > 0)
	{
		binary[idx] = (temp % 2) + '0';
		temp /= 2;
		idx++;
	}

	for (bin_len = 0; binary[bin_len] != '\0'; bin_len++)
		;

	while (binary[bin_len - 1] != '\0')
		buff[buff_count++] = binary[--bin_len];

	return (buff_count);
}
