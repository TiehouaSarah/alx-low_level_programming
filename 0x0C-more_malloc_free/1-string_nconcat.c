#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Function that concatenate tring depending on number 2
 *
 * @s1 : first parameter
 * @s2 : second string
 * @n : number of char from s2 to concatenate
 *
 * Return - return allocated memory
 * Return: Always 0 (Success)
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *resultConcatenateStr;
	unsigned int i, j;
	unsigned int length1, length2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 =  strlen(s1);
	length2 = strlen(s2);

	if (n >= length2)
	{
		resultConcatenateStr = malloc(sizeof(char) * (length1 + length2 + 1));
	} else
	{
		resultConcatenateStr = malloc(sizeof(char) * (length1 + n + 1));
	}
	if (resultConcatenateStr == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
		resultConcatenateStr[i] = s1[i];
	for (j = 0; j < n; j++)
		resultConcatenateStr[i++] = s2[j];
	resultConcatenateStr[i++] = '\0';

	return (resultConcatenateStr);


}
