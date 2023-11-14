#include "main.h"
#include <stdio.h>
/**
 * _printf - produces output according to a format
 * @format: Format
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{

	va_list args;
	unsigned int i, temp, count = 0;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			temp += print_string(va_arg(args, char *));
			i++;
			count += (temp - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		count += 1;
	}
	va_end(args);
	return (count);
}
