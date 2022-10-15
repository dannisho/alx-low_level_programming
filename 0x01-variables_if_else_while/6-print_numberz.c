#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main func
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
