/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** 
*/

void	start_shell(char **env, char *s)
{
	char **nav = my_str_to_word_array(s);
	char cwd[256];
	char *path = my_concat(get_path(env), ":");
	path = my_concat(path, getcwd(cwd, sizeof(cwd)));
	char **envp = my_path_to_word_array(path);
	int nb = custom_func(nav, env, envp);

	if (get_index(envp, nav[0]) != -1)
		start_soft(nav, env, envp);
	env = env_func(nav, env, envp);
	if (nav[0] != NULL && get_index(envp, nav[0]) == -1 && nb != 1) {
		my_putstr(my_concat(nav[0], " : command not found\n"));
	}
	my_putstr("$>");
}

int	main(int ac, char **av, char **env)
{
	char *s = NULL;
	size_t len = 0;
	ssize_t read;

	my_putstr("$>");
	while ((read = getline(&s, &len, stdin)) != -1) {
		start_shell(env, s);
	}
	return (0);
}