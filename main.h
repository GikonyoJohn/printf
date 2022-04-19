#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _putchar(char c);
int _puts(char *strn);
int _strlen(char *i);
int _printf(const char *format, ...);
void _puts(char *strn);
char *convert_to(char get[], unsigned int num, int base);
int print_char(va_list arguments);
int print_str(va_list arguments);
int print_nbr(va_list arguments);
int print_binary(va_list arguments);
int print_octal(va_list arguments);
int print_hexa_lower(va_list arguments);
int print_hexa_upper(va_list arguments);
int print_unsigned(va_list arguments);
int print_str_unprintable(va_list arguments);
int print_str_reverse(va_list arguments);
int print_ptr(va_list arguments);
int print_rot13(va_list arguments);
int print_percent(va_list arguments __attribute__((unused)));

typedef struct flags
{
unsigned char flag;
unsigned char value;
} flag_t
