#ifndef HOLBERTON_H_
#define HOLBERTON_H_

#include<stdio.h>
#include<fcntl.h> 
#include<unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif /* HOLBERTON_H_ */