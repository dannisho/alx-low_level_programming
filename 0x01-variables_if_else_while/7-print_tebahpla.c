#include <stdio.h>
#include <stdlib.h>
/**
 * main - main func
 * Return: 0 on
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
