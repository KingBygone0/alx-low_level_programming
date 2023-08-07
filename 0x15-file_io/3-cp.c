#include "main.h"
#include <stdio.h>
/**
 * main - copy a file into another file
 * @argc: amount of arguments
 * @argv: arguments
 * Return: a exit value if fails else return 0
 **/
int main(int argc, char **argv)
{
	int fto = 0, fto_final = 0, ffrom = 0, rd1 = 0, wr2 = 0, cl1 = 0, cl2 = 0;
	char buf[1024];

	if (argc != 3)
	{
		write(STDOUT_FILENO, "Usage: cp file_from file_to\n", 27);
		exit(97);	}
	ffrom = open(argv[1], O_RDONLY);
	if (ffrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);	}
	fto = open(argv[2], O_CREAT | O_EXCL);
	if (fto < 0)
		fto_final = open(argv[2], O_TRUNC);
	if (fto >= 0)
	{
		close(fto);
		fto_final = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);	}
	for (rd1 = read(ffrom, buf, 1024); rd1 > 0; rd1 = read(ffrom, buf, 1024))
	{
		wr2 = write(fto_final, buf, rd1);
		if (wr2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);		}
	}
	cl1 = close(fto_final);
	if (cl1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s", argv[2]);
		exit(100);	}
	cl2 = close(ffrom);
	if (cl2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can´t close fd %s", argv[1]);
		exit(100);	}
	return (0);
}
