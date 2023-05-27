#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>


extern char **environ;
char **spltstr(char *str);
char *_strcat(char *dest, char *src);
char *_getenv(char *name);
int _strlen(char *s);
char *_strdup(char *str);
char *_strchr(char *s, char c);
int _strncmp(const char *s1, const char *s2, size_t n);
int _strcmp(char *s1, char *s2);
char *read_line(void);
int _putchar(char c);
int execute_command(char **array);
int execute_path_commands(char **array);
int _runs_command(char *path, char **array);
char *build_path(char *token, char *command);
int find_command(char **array);
int execute_external_command(char **array);
int execute_builtin_env(void);
int count_words(char *str);
int get_word_length(char *str, int start);
char *get_path_env(void);

#endif

