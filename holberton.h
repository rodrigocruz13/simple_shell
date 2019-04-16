#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>

#define INPUT_TOK_DELIMS " \n"
#define PATH_TOK_DELIMS ":\n"


/* Global Variables START */
char **SHELL_ENV_VARS;
char *HSH_ARGV_ZERO;
/* Global Variables END */

/* String Fuctions Prototypes */
int _putchar(char c);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
void _put_string(char *str);
/* Shell Prototypes */
void check_builtins(char **tokens);
char **get_path(char *parsed_input);
int execute_cmd(char **tokens);
int create_fork(char **tokens);
int process_tokens(char **tokens);
char **get_tokens(char *parsed_input);
char *get_parsed_input(char *input);
char *get_input(void);
void catch_sig(int sig);
void put_prompt(void);
void create_loop(void);


#endif /* _HOLBERTON_H_ */
