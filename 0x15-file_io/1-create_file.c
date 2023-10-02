#include "main.h"

/**
 * create_file - create file
 *
 * @text_content: ....
 * @filename: ....
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	/*check file name */
	if (!filename)
		return (-1);
	/*get len of content -> will pass it letter to write function */
	if (text_content)
		while (text_content[len])
			len++;
	/*start to work on file*/
	/*first open the file */
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	/*write content*/
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
