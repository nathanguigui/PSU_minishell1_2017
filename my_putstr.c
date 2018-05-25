/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** 
*/

int	my_putstr(char const *str)
{
	int c = 0;
	while (str[c]) {
		my_putchar(str[c]);
		c = c + 1;
	}
	return (0);
}