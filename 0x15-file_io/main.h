#ifndef MAIN_H
#define MAIN_H

#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

Ssize_t read_textfile(const char *filename, size_t letters);
Int _putchar(char c);
Int create_file(const char *filename, char *text_content);
Int append_text_to_file(const char *filename, char *text_content);

#endif
