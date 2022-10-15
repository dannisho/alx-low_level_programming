#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints the alphabet in lowercase
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
