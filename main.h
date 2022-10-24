#ifndef MAIN_FILE
#define MAIN_FILE

#include <stdarg.h>
#include <stdlib.h>

/* Main printf function */
int _printf(const char *format, ...);

/* printer functions */
int printer(char specefier, va_list args, char *buff, int buff_count);
int print_int(char *buff_dest, va_list args, int buff_count);
int print_char(char *buff, va_list args, int buff_count);
int print_str(char *buff, va_list args, int buff_count);
int print_precision(char *buff, va_list args, int buff_count);
int print_letter(char letter, char *buffer, int buff_count);
int print_binary(char *buff, va_list args, int buff_count);
int print_unsigned(char *buff, va_list args, int buff_count);
int print_octal(char *buff, va_list args, int buff_count);
int print_hexadecimal(char *buff, va_list args, int buff_count);
int print_hexadecimal_rec(unsigned int decimal_num, char *buff, va_list args, int buff_count, int hexlen);
int print_hexadecimal_uppercase(char *buff, va_list args, int buff_count);
int print_custom_str(char *buff, va_list args, int buff_count);
int print_pointer(char *buff, va_list args, int buff_count);

/* Flaggers functions */
int flagger(char flag, va_list args, char *buff, int buff_count);
int flag_plus(va_list args, char *buff, int buff_count);
int flag_space(va_list args, char *buff, int buff_count);
int flag_hashtag(va_list args, char *buff, int buff_count);

/* Writing to output stream */
void write_buffer(char *buffer, int buff_count);

/* helpers */
char *convert_to_hex(int symbol);
char *_strcat(char *dest, char *src);
char *hex_converter(__uint64_t num);
int *parse_pointers(void *ptr);

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

/**
 * struct flags_s - struct of flags and
 * the funtion associated with that charchter
 * @specefier: flag associated to specified function
 * @flagger: callback function to specifiec flagger
 */

typedef struct flag
{
	char flag;
	int (*flagger)(va_list, char *, int);
} flags_t;

#endif
