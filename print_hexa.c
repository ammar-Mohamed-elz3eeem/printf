#include "main.h"

/**
 * print_hexadecimal - unsigned int argument is converted to hexadecimal
 * @args: argument list of variadic function
 * @buff: buff to print data in
 * @buff_count: count of the current integer in buffer
 * Return: current buff count
 */

int print_hexadecimal(char *buff, va_list args, int buff_count)
{
	unsigned int decnum;
	unsigned int temp;
	unsigned int hexlen = 0;
	unsigned int idx = 0;
	char *hexstr;

	decnum = va_arg(args, unsigned int);
	temp = decnum;
	if (temp == 0)
	{
		buff[buff_count++] = '0';
		return buff_count;
	}
	while (temp > 0)
	{
		temp /= 16;
		hexlen++;
	}
	hexstr = malloc(sizeof(char) * hexlen + 1);
	temp = decnum;
	while (idx < hexlen)
	{
		if (temp % 16 > 9)
			hexstr[hexlen - idx - 1] = (temp % 16) + 87;
		else
			hexstr[hexlen - idx - 1] = (temp % 16) + '0';
		temp /= 16;
		idx++;
	}
	idx = 0;
	while (idx < hexlen)
		buff[buff_count++] = hexstr[idx++];
	return buff_count;
}