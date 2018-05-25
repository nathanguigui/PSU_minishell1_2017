/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** 
*/

int	my_strcmp(char *str1, char *str2)
{
	int i = 0;

	if (str1 == NULL && str2 == NULL)
		return(1);
	else if (str1 == NULL)
		return(0);
	while (str1[i]) {
		if (str1[i] != str2[i])
			return (0);
		i = i + 1;
	}
	return (1);
}