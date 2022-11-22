#include "main.h"

/**
 * print_long_number - prints a long integer
 * @args: arguments
 *
 * Return: count
 */
int print_long_number(va_list args)
{
	long int num;
	unsigned long int num_t, temp, i, div = 1, count = 0;

	num = va_arg(args, long int);
	if (num < 0)
	{
		num_t = num * -1;
		_putchar('-');
		count++;
	}
	else
	{
		num_t = num;
	}

	temp = num_t;

	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}

	for (i = 0; div > 0; div /= 10, i++, count++)
	{
		_putchar(((num_t / div) % 10) + '0');
	}
	return (count);
}

/**
 * print_short_number - prints a short integer number using an array
 * @args: arguments
 *
 * Return: count
 */
int print_short_number(va_list args)
{
	short int num;
	unsigned short int num_t, temp, i, div = 1, count = 0;

	num = va_arg(args, int);
	if (num < 0)
	{
		num_t = num * -1;
		_putchar('-');
		count++;
	}
	else
	{
		num_t = num;
	}

	temp = num_t;

	while (temp > 9)
	{
		div *= 10;
		temp /= 10;
	}

	for (i = 0; div > 0; div /= 10, i++, count++)
	{
		_putchar(((num_t / div) % 10) + '0');
	}
	return (count);
}
