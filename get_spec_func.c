#include "main.h"
#include <stddef.h>

/**
 * get_spec_func - check specifier function and return function
 * @s: type to check
 * Return: pointer to function to use
 */

char *(*get_spec_func(char s))(va_list)
{
	int i;
	s_types spec_types[] = {
		{"c", char_find},
		{"s", string_find},
		{"%", percent_find},
		{"d", int_find},
		{"i", int_find},
		{"u", unsigned_find},

	};

	for (i = 0; spec_types[i].spec; i++)
		if (s == *spec_types[i].spec)
			return (spec_types[i].f);

	return (spec_types[i].f);
}
