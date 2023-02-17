#include <stdio.h>
/**
 * main - prints the alphabet in lowercase.
(*
 * Return: 0 on success
 */
int main(void)
{
	char l = 'a';
  char u = 'A';

	while (l<= 'z')
	{
		putchar(l);
		l++;
	}
  while(u<='A') {
    putchar(u);
    u++;
  }
	putchar('\n');
	return (0);
}