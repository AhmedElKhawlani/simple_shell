#ifndef _simple_shell_h_
#define _simple_shell_h_
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

extern char **environ;
char *new_command(void);
int str_length(const char *str);
char *copy_string(const char *str);
char **split_command(char *command);
void free_array(char **to_free);
int execute_command(char **splitted_command, char **av);
#endif
