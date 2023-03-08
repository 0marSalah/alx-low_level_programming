#include "main.h"

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
* is_palindrome_helper - a function that help me
* @s: char
* @start: integer
* @end: integer
* Return: recursively check
**/

int is_palindrome_helper(char *s, int start, int end) {
	if (start >= end) {
		return 1;
	}
	if (s[start] != s[end]) {
		return 0;
	}
	return is_palindrome_helper(s, start+1, end-1);
}
/**
* is_palindrome - a function that returns 1 if a string is a palindrome and 0 if not.
* @s: char
* Return: 1 if palindrome or 0 if not
**/

int is_palindrome(char *s) {
	int len = _strlen(s);
	return is_palindrome_helper(s, 0, len-1);
}

