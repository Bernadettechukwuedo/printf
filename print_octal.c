#include "main.h"

/**
 * print_octal - prints a num in octal format
 * @args: arguments
 *
 * Return: count
 */
int print_octal(va_list args)
{
	unsigned int p, num, oct[100];
	int r;

	/* va_arg calls the argument provided and passes it as unsigned int */
	num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	/* continously divide by 8 and place in an array to be printed */
	for (p = 0; num != 0; p++)
	{
		oct[p] = num % 8;
		num /= 8;
	}

	for (r = p - 1; r >= 0; r--)
		_putchar(oct[r] + '0');

	return (p);
}

/**
 * print_long_octal - prints a num in octal format
 * @args: arguments
 *
 * Return: count
 */
int print_long_octal(va_list args)
{
	unsigned long int p, num, oct[100];
	long int r;

	/* va_arg calls the argument provided and passes it as unsigned int */
	num = va_arg(args, unsigned long int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	/* continously divide by 8 and place in an array to be printed */
	for (p = 0; num != 0; p++)
	{
		oct[p] = num % 8;
		num /= 8;
	}

	for (r = p - 1; r >= 0; r--)
		_putchar(oct[r] + '0');

	return (p);
}

/**
 * print_short_octal - prints a num in octal format
 * @args: arguments
 *
 * Return: count
 */
int print_short_octal(va_list args)
{
	unsigned short int p, num, oct[100];
	short int r;

	/* va_arg calls the argument provided and passes it as unsigned int */
	num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	/* continously divide by 8 and place in an array to be printed */
	for (p = 0; num != 0; p++)
	{
		oct[p] = num % 8;
		num /= 8;
	}

	for (r = p - 1; r >= 0; r--)
		_putchar(oct[r] + '0');

	return (p);
}

/**
 * print_hash_octal - prints a num in octal format
 * @args: arguments
 *
 * Return: count
 */
int print_hash_octal(va_list args)
{
	unsigned int p, num, oct[100];
	int r;

	/* va_arg calls the argument provided and passes it as unsigned int */
	num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	_putchar('0');
	/* continously divide by 8 and place in an array to be printed */
	for (p = 0; num != 0; p++)
	{
		oct[p] = num % 8;
		num /= 8;
	}
	for (r = p - 1; r >= 0; r--)
		_putchar(oct[r] + '0');

	return (p + 1);
}
