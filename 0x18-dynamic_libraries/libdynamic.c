#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
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
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/**
 * _abs - Computes the absolute value of an integer.
 * @n: The integer to be computed.
 *
 * Return: The absolute value of the integer.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}

/**
* _isupper - returns 1 if uppercase alphabet and 0 otherwise
* @c: takes in a character
* Return: 0 for uppercase, 1 for lowercase
**/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

/**
* _isdigit - Returns 1 if c is a digit
* @c: takes in a character
* Return: 0 for uppercase, 1 for lowercase
**/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}

/**
* _strlen - function that returns the length of a string.
* @s : s is a character
* Return: value is i
**/

int _strlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}

/**
* _puts - prints a string
* @str: char
* Return: string
**/

void _puts(char *str)
{
while (*str)
{
_putchar(*str++);
}
_putchar('\n');
}
/**
 * _strcpy - entry point
 * Description: copies the string pointer, null byte, dest pointer
 * @dest: destiny
 * @src: font
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
		j++;
	return (dest);
}


/**
 * _atoi - converests a string to an integer
 * @s: string to convert
 * Return: numbre
 */


int _atoi(char *s)
{
	int n, i, m;

	m = 1;
	i = n = 0;
	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			m = m * -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (n >= 0)
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			n = n * 10 - (s[i] - '0');
			i++;
		}
	}
	m = m * -1;
	return (n * m);
}

/**
* *_strcat - a function that concatenates two strings
* @dest: string
* @src: string
* Return: string
**/

char *_strcat(char *dest, char *src)
{
	int l;
	int i;

	for (l = 0; dest[l] != '\0'; l++)
	{
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[l + i] = src[i];
	}
	return (dest);
}

/**
* *_strncat - concatenates two strings.
* @dest: string to be appended
* @src: string to be appended from
* @n: number of bytes from src
* Return: a pointer to the resulting string dest
**/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	if (n <= 0)
	{
		return (dest);
	}

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i++] = '\0';
	return (dest);
}

/**
* *_strncpy - a function that copies a string
* @dest: string
* @src: string
* @n: integer
* Return: string
**/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')

	{
		if (i < n)
		{
			dest[i] = src[i];
		}
		i++;
	}
		while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/**
* _strcmp - a function that copies a string
* @s1: string
* @s2: string
* Return: string
**/

int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		else if (*s1 == '\0' || *s2 == '\0')
		{
			break;
		}
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
	return (*s1 - *s2);
	}
}

/**
* _memset - a function that fills memory with a constant byte
* @s: char
* @b: char
* @n: int
* Return: a pointer to memory area s
**/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
* _memcpy - a function that copies memory area
* @dest: char
* @src: char
* @n: int
* Return: a pointer to dest
**/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
/**
* _strchr - a function that locates a character in a string
* @s: string
* @c: char in s
* Return: the first occurrence or NULL
**/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
/**
* _strspn - a function that gets the length of a prefix substring
* @s: character
* @accept: character string
*
* Return: returns number of bytes in the initial segment s which consist
*of bytes from accept
**/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				l++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (l);
	}
	return (l);
}
/**
* _strpbrk - function searches string for any set of bytes
* @s: string
* @accept: string
* Return: a pointer to the byte in s
**/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (0);
}
/**
* _strstr - this function locates a substring
* @haystack:character string
* @needle:character string
* Return: a pointer to the beginning of substring or NULL
**/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int l;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (l = i, j = 0; needle[j] != '\0'; j++, l++)
		{
			if (needle[j] != haystack[l] || haystack[l] == '\0')
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (0);
}
