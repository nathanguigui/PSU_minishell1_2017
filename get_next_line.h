/*
** EPITECH PROJECT, 2018
** get_next_line.h
** File description:
** 
*/

#ifndef MINI_SH_
#define MINI_SH_
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>


int my_putchar(char const c);
int my_putstr(char const *str);
int my_strlen(char *str);
int my_put_nbr(int nb);
int my_strcmp(char *str1, char *str2);
void my_show_word_array(char **tab);

char *get_path(char **env);
int get_index(char **path, char *soft);


//str to word array
int     is_charac(char c, int status);
int	coumpt(char *str);
int len_of_word(char *str, int i);
char **my_str_to_word_array(char *str);
//path to word array
int	coumpt_p(char *str);
int len_of_word_p(char *str, int i);
char **my_path_to_word_array(char *str);
//core
void start_soft(char **nav, char **env, char **envp);
int	custom_func(char **nav, char **env, char **envp);
//env
char	**env_func(char **nav, char **env, char **envp);
char	**unset_env(char **env, char *str);
int	nb_env(char **env);

char *my_concat(char *str1, char *str2);


#endif