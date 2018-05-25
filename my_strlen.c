/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** 
*/

int	my_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}