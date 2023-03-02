#include "main.h"
/**
 * string_toupper - Converts all lowercase letters of a string to uppercase.
 *
 * @str: Pointer to a string.
 *
 * Return: A pointer to the resulting string.
 */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
			if (*str >= 'a' && *str <= 'z')
			{
				*str -= 32;
			}
			str++;
	}

	return (str);
}
