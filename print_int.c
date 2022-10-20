#include "main.h"
#include "limits.h"

/**
 * print_int - prints an integer to the output stream
 * @args: argument list of variadic function
 * @buff: buff to print data in
 * @buff_count: count of the current integer in buffer
 * Return: current buff count
 */

int print_int(char *buff_dest, va_list args, int buff_count)
{
	int tens = 1;
	unsigned int tmp;
	int number;

	number = va_arg(args, int);

	if (number < 0)
	{
		buff_dest[buff_count] = '-';
		number *= -1;
		buff_count++;
	}
	tmp = number;

	if (number == INT_MIN)
		tmp++;

	while (tmp > 9)
	{
		tens *= 10;
		tmp /= 10;
	}

	tmp = number;
	while (tens > 0)
	{
		buff_dest[buff_count] = ('0' + tmp / tens);
		tmp %= tens;
		tens /= 10;
		buff_count++;
	}

	return (buff_count);
}