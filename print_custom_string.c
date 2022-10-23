#include "main.h"
#include <stdio.h>
/**
 * print_custom_str - this will print str to the standard output
 * @args: argument list of variadic function
 * @buff: buff to print data in
 * @buff_count: count of the current integer in buffer
 * Return: current buff count
 */

int print_custom_str(char *buff, va_list args, int buff_count)
{
	char *str;
	int idx = 0;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	for (idx = 0; str[idx] != '\0'; idx++)
	{
		if ((str[idx] > 0 && str[idx] < 32) || str[idx] >= 127)
		{
			char *symbol_string = _strcat("\\x", convert_to_hex(str[idx]));
			int subidx = 0;
			while (symbol_string[subidx])
				buff[buff_count++] = symbol_string[subidx++];
		}
		else
			buff[buff_count++] = str[idx];
	}
	return (buff_count);
}

char *convert_to_hex(int symbol)
{
	int temp = symbol, idx = 1;
	char *hexstr;

	hexstr = malloc(sizeof(char) * 2);

	while (idx >= 0)
	{
		if ((temp % 16) > 9)
			hexstr[idx--] = (temp % 16) + 55;
		else
			hexstr[idx--] = (temp % 16) + '0';
		temp /= 16;
	}

	return hexstr;
}