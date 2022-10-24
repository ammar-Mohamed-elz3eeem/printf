#include <main.h>

/**
 * flagger - function to handle flags
 * @flag: charchter to specify which specify flag type
 * @args: argument list of variadic function
 * @buff: buff to print data in
 * @buff_count: count of the current integer in buffer
 * Return: current buff count
 */

int flagger(char flag, va_list args, char *buff, int buff_count)
{
	int idx;
	flags_t flags[] = {
	    {'+', flag_plus},
	    {' ', flag_space},
	    {'#', flag_hashtag},
	    {'\0', NULL}};

	for (idx = 0; flags[idx].flag != '\0'; idx++)
	{
		if (flags[idx].flag == flag)
		{
			buff_count = flags[idx].flagger(args, buff, buff_count);
			return (buff_count);
		}
	}
	return (0);
}
