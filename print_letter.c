#include "main.h"

/**
 * print_letter - prints any letter to the stdout
 * @letter: letter to be printed
 * @buffer: string to put letter in
 * @buff_count: number of letters in the buffer
 * Return: number of elements on the buffer
 */

int print_letter(char letter, char *buffer, int buff_count)
{
	buffer[buff_count++] = letter;
	return (buff_count);
}
