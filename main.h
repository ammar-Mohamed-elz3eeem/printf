#ifndef MAIN_FILE
#define MAIN_FILE

#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int print_int(char *buff_dest, va_list args, int buff_count);
int printer(char specefier, va_list args, char *buff, int buff_count);
void write_buffer(char *buffer, int buff_count);
int print_char(char *buff, va_list args, int buff_count);
int print_str(char *buff, va_list args, int buff_count);
int print_precision(char *buff, va_list args, int buff_count);
int print_letter(char letter, char *buffer, int buff_count);

/**
 * struct printer_s - struct of charchter and
 * the funtion associated with that charchter
 * @specefier: char associated to specified function
 * @printer: callback function to specifiec printer
 */

typedef struct printer_s
{
	char specefier;
	int (*printer)(char *, va_list, int);
} printer_t;

#endif
