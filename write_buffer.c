#include <unistd.h>

/**
 * write_buffer - this function will write a buffer to the output stream
 * @buffer: buffer content to be printed
 * @buff_count: number of chars in the buffer
 */

void write_buffer(char *buffer, int buff_count)
{
	if (buffer == NULL)
		return;

	write(1, buffer, buff_count);
}
