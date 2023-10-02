#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - ....
 * @filename: ...
 * @letters: ...
 *
 * Return: ....
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	/*check if file exist*/
	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/*open the file */
	o = open(filename, O_RDONLY);
	/* read */
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
