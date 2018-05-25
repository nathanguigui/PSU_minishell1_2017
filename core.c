/*
** EPITECH PROJECT, 2017
** core.c
** File description:
** 
*/

int	ch_dir(char **nav)
{
	if (chdir(nav[1]) == -1) {
		perror("bash: cd");
	}
	return (1);
}

int	custom_func(char **nav, char **env, char **envp)
{
	int k = 0;
	(my_strcmp(nav[0], "exit")) ? exit(0) : 1;
	(my_strcmp(nav[0], "cd")) ? k = ch_dir(nav) : 1;
	return (k);
}

void	start_soft(char **nav, char **env, char **envp)
{
	char *npath = envp[get_index(envp, nav[0])];
	int pid = fork();
	int status;

	if (pid == 0) {
		if (execve(my_concat(npath, nav[0]), nav, env) == -1)
			exit(0);
		perror("execve");
	} else if (pid > 0)
		wait(&status);
	if (status != 0 && status < 32) {
		my_putstr(strsignal(status));
		my_putchar('\n');
	}
}