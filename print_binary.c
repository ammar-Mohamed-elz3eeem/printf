#include "main.h"
#include <stdio.h>
#include <string.h>

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
	char *binary;
	int bin_len = 0, idx;

	bin = va_arg(args, int);
	temp = bin;

	if (temp == 0)
	{
		buff[buff_count++] = '0';
		return (buff_count);
	}

	while (temp > 0)
	{
		temp /= 2;
		bin_len++;
	}

	binary = malloc(sizeof(char) * (bin_len + 1));

	temp = bin;

	for (idx = 0; idx < bin_len; idx++)
	{
		binary[idx] = (temp % 2) + '0';
		temp /= 2;
	}

	while (binary[bin_len - 1] && bin_len > 0)
	{
		buff[buff_count++] = binary[bin_len - 1];
		bin_len--;
	}

	return (buff_count);
}
