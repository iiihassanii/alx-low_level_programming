#include "main.h"

/**
 * append_text_to_file - appends at end
 * @filename: name of file
 * @text_content: ..........
 *
 * Return:....
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	/* ckeck file name*/
	if (!filename)
		return (-1);

	/*get len*/
	if(text_content)
		while (text_content[len])
			len++;

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	close(o);
	return (1);
}
