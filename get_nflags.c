#include "main.h"

/**
 * get_nflags - gets a particular function
 * @str: the string
 * @id: the index / function
 *
 * This function is called from the _printf function after % is encountered
 * It will return NULL if the char after % is not a specifier and just print %
 *
 * Return: number of characters to skip
 */
int get_nflags(const char *str, int id)
{
	prn fns[] = {
		{"c", print_char}, {"s", print_str},
		{"%", print_percent}, {" d", print_space_number},
		{"d", print_number}, {"i", print_number},
		{"b", print_binary}, {"lu", print_long_unsigned_dec},
		{"hu", print_short_unsigned_dec}, {"x", print_unsigned_hex},
		{"X", print_unsigned_HEX}, {"#x", print_hash_hex},
		{"#X", print_hash_HEX},	{"#o", print_hash_octal},
		{"ho", print_short_octal}, {"lo", print_long_octal},
		{"lx", print_long_unsigned_hex}, {"lX", print_long_unsigned_HEX},
		{"hx", print_short_unsigned_hex}, {"hX", print_short_unsigned_HEX},
		{"li", print_long_number}, {"ld", print_long_number},
		{"hd", print_short_number}, {"hi", print_short_number},
		{"p", print_addr}, {"o", print_octal},
		{"u", print_unsigned_dec}, {"S", print_STR},
		{NULL, NULL}
	};
	int i = 0, j = 0;

	if (str)
	{
		while (fns[i].func != NULL)
		{
			if (fns[i].c[j] == str[id])
			{
				if (fns[i].c[j + 1] == '\0')
				{
					return (j + 1);
				}
				else
				{
					i--;
					j++;
					id++;
				}
			} i++;
		}
	}
	return (0);
}
