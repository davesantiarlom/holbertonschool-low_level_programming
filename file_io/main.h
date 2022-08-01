#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/uio.h>|
#include <unistd.h>
#include <stdlib.h>
#define BUFSIZE 1204

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
