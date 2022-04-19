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
