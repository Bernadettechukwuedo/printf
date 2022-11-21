#include "main.h"
/**
 * _printf - a function that produces output according to a format
 * @format: is a character printf
 * a function pointer, that accepts va_list as argument
 * Declare a variable list, with its own argument(begins at va_start)
 * Return: the total number of characters printed(count)
 */
int _printf(const char *format, ...)
{
	va_list list;
	int j = 0, count = 0;

	int (*ptr_func)(va_list);

	/* Returns -1 if format is null */

	if (!format || (format[j] == '%' && format[j + 1] == '\0'))
		return (-1);
	if (!format[j])
		return (0);

	va_start(list, format);
	for (j = 0; format[j] != '\0'; j++)
	{
		if (format[j] == '%')
		{
			if (format[j + 1] == '\0')
				return (-1);

			ptr_func = get_func(format, j + 1);
			if (ptr_func == NULL)
			{
				_putchar('%');
				count++;
			}
			else
			{
				count += ptr_func(list);
				j += get_nflags(format, j + 1);
			}
		}
		else
		{
			_putchar(format[j]);
			count++;
		}
	}
	return (count);
}
