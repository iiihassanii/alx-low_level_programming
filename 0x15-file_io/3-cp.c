#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @ac: ........
 * @av: a.ds.ad.
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int ofile_from, ofile_to;
	ssize_t lenr, lenw;
	char buff[1024];

	if (ac != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/*open file from "the first file" */
	ofile_from = open(av[1], O_RDONLY);
	if (ofile_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	/*open file to "second" */
	ofile_to = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0777);
	if (ofile_to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(ofile_from, buff, 1024);
		lenw = write(ofile_to, buff, lenr);
		if (lenw != lenr)
			lenw = -1;
	}
	ofile_from = close(ofile_from);
	ofile_to = close(ofile_to);
	if (ofile_from || ofile_to)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", -1);
		exit(100);
	}
	return (0);
}
