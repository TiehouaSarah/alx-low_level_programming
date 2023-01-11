#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - return concatenate strin
 *
 * @s1: first parameter
 *
 * @s2: second parameter
 *
 * Description: nothing to say
 *
 * Return: Return NULL if size = 0 / pointer to array/NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *completePhrase;
	unsigned int len1, len2, i;

	len1 = 0;
	len2 = 0;
	i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	completePhrase = malloc(sizeof(char) * (len1 + len2 + 1));
	if (completePhrase == NULL)
		return (NULL);

	while (i < len1)
	{
		completePhrase[i] = s1[i];
		i++;
	}
	completePhrase = strcat(completePhrase, s2);
	return (completePhrase);
}
