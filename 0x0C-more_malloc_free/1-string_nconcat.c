#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int | s1, | s2, | sout, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (| s1 = 0; s1[| s1] != '\0'; | s1++)
		;
	for (| s2 = 0; s2[| s2] != '\0'; | s2++)
		;
	if (n > | s2)
		n = | s2;
	| sout = | s1 + n;

	sout = malloc(| sout + 1);

	if (sout == NULL)
		return (NULL);

	for (i = 0; i < | sout; i++)
		if (i < | s1)
			sout[i] = s1[i];
		else
			sout[i] = s2[i - | s1];
	sout[i] = '\0';

	return (sout);
}
