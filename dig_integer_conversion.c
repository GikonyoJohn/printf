#include <stdlib.h>
#include <unistd.h>


/**
 * _putchar - writes the character c to stdouputt
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *_strlen - reset number
 *Description: This function return a length for some string
 *@i: pointer char
 *Return: int length
 */
int _strlen(char *i)
{
	int len = 0;

	while (*i++)
	{
		len++;
	}
	return (len);
}
/**
 *_puts - print string
 *Description: print some string
 *@str: pointer char
 *Return: Nothing
 */
void _puts(char *strn)
{
	int i;

	for (i = 0; i < _strlen(strn); i++)
	{
		_putchar(strn[i]);
	}
}
/**
 *convert_to - convert integers
 *Description: This function convert integers to other formats
 *decimal, octal, hexadecimal, binary etc..
 *@get: char get[] = "0123456789ABCDEF";
 *@num: num to tranasform
 *@base: base to transform num
 *Return: number into char pointer
 */
char *convert_to(char get[], unsigned int num, int base)
{
	char *j;
	static char buffer[128];
	int mod = 0;

	j = &buffer[127];
	*j = '\0';

	do {
		mod = num % base;
		*--j = get[mod];
		num /= base;
	} while (num != 0);
	return (ptr);
}
