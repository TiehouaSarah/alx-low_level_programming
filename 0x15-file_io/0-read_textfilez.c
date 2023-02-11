#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - function that creates a file
 * @filename: first parameter
 * @letters: second parameter
 *
 * Return: int value
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *ch = malloc(sizeof(char) * (letters + 1));
	ssize_t size = 0;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	while (!feof(fp))
	{
		if(fgets(ch, letters, fp) != NULL)
			printf("%s", fgets(ch, letters, fp));
		size++;
	}

	fclose(fp);
	free(ch);

	return (size);
}
