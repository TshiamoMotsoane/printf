#include "main.h"
#include <stdarg.h>
/**
 * print_string - prints a string
 * @str: string to be printed
 *
 * Return: number characters printed
 */
int print_string(char *str)
{
	int count = 0;

	if  (str)
	{
		for (count = 0; str[count] != '\0'; count++)
		{
			_putchar(str[count]);
		}
	}
	return (count);
}
