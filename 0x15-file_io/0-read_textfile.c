#include “main.h”

/**
 * read_textfile – reads a text file and prints
 *  it to the POSIX standard output.
 * @filename: pointer to file containing chars.
 * @letters: letters to be read and printed.
 *
 * Return: number of letters it could read & print
 *         otherwise 0.
 */

Ssize_t read_textfile(const char *filename, size_t letters)
{
	Ssize_t  op, r, wr;
	Char *storage;

	If (filename == NULL)
		Return (0);

	Storage = malloc(sizeof(char) * letters);

	If (storage == NULL)
		Return (0);

	Op = open(filename, O_RDONLY); /* opens file in read only mode*/
	R = read(op, storage, letters);
	Wr = write(STDOUT_FILENO, storage, r);

	If (op == -1 || r == -1 || wr == -1 || wr != r)
	{
		Free(storage);
		Return (0);
	}

	Free(storage);
	Close(op);

	Return (wr);
}
