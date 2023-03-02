#include "main.h"

/**
* *_strncat - concatenates two strings.
* @dest: string to be appended
* @src: string to be appended from
* @n: number of bytes from src
* Return: a pointer to the resulting string dest
**/

char *_strncat(char *dest, char *src, int n) {
	int dest_len = 0;
	while (dest[dest_len] != '\0') {
			dest_len++;
	}
	for (int i = 0; i < n && src[i] != '\0'; i++) {
			dest[dest_len + i] = src[i];
	}
	dest[dest_len + n] = '\0';
	return dest;
}
