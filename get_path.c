/*
** EPITECH PROJECT, 2017
** get_path.c
** File description:
** 
*/

int	get_index(char **path, char *soft)
{
	int x = 0;
	char *tmp;

	if (soft == NULL)
		return (-1);
	while (path[x]) {
		tmp = my_concat(path[x], soft);
		if (open(tmp, O_RDONLY) != -1 )
			return (x);
		x = x + 1;
	}
	return (-1);
}

char	*get_path(char **env)
{
	char *str;
	int b = 0;
	int it = 0;
	int x = 0;
	int l = 0;
	
	while (env[x]) {
		if (env[x][0]=='P' && env[x][1]== 'A' && env[x][2] == 'T' && env[x][3] == 'H') {
			while (env[x][it] != '=' && env[x][it] != '\0') {
				it = it + 1;
			}
			it = it + 1;
			l = my_strlen(env[x]) - it;
			str = malloc(sizeof(char)* l + 1);
			while (env[x][it] != '\0') {
				str[b] = env[x][it];
				b = b + 1;
				it = it + 1;
			}
			str[b] = '\0';
			return (str);
		}
		x = x + 1;
	}
	return (str);
}