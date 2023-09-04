#include “main.h”

/**
 * create_file – function that creates a file.
 * @filename: the name of the file to create
 * @text_content: NULL terminated string
 *                to write to the file.
 *
 * Return: 1 on success
 *        -1 on failure.
 */
Int create_file(const char *filename, char *text_content)
{
	Int o, w, len = 0;

	If (filename == NULL)
		Return (-1);

	If (text_content != NULL)
	{
		For (len = 0; text_content[len];)
			Len++;
	}

	O = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	W = write(o, text_content, len);

	If (o == -1 || w == -1)
		Return (-1);

	Close(o);

	Return (1);
}
