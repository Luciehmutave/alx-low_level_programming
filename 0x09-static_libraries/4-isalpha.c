#include "main.h"

/**
 * _isalpha - checks alphabetic character
 * @c: character to be checked
 * Return: 1 if c is a letter and return 0 if its not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
