#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int _printf(const char *format, ...);
char *convert_to(char representation[], unsigned int num, int base);
int function_manager(char c, va_list arg);
int _switch(char c, va_list arg);
int print_character(va_list arg);

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
unsigned char flags;
unsigned char value;
} flags_t
