#include "main.h"

int findLength(char *s);
int helper(char *s, int len, int a);

/**
 * is_palindrome - function with 1 argument
 * @s: char type pointer argument
 *
 * Description: test if string is palindrome
 * Return: 1 if palindrome or 0 if not
 */
int is_palindrome(char *s)
{
	return (helper(s, findLength(s) - 1, 0));
}

