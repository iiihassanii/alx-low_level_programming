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
	ssize_t rbuff;
	char buff[1024];

	if (ac != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ofile_from = open(av[1], O_RDONLY); /*open file from "the first file" */
	if (ofile_from == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	ofile_to = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0777);
	if (ofile_to == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((rbuff =  read(ofile_from, buff, 1024)) > 0)
		if (write(ofile_to, buff, rbuff) != rbuff)
				{
					fprintf(stderr, "Error: Can't read from file %s\n", av[1]);
					exit(98);
				}
	if (rbuff == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", av[1]);
		exit(98);
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
