/*
** EPITECH PROJECT, 2017
** my_concat.c
** File description:
** 
*/

char	*my_concat(char *str1, char *str2)
{
	int i = 0;
	int cur = 0;

	if (str1 == NULL)
		return (str2);
	if (str2 == NULL)
		return (str1);
	int size = my_strlen(str1) + my_strlen(str2);
	char *result = malloc(sizeof(char) * size + 1);
	while (str1[i]) {
		result[cur] = str1[i];
		i = i + 1;
		cur = cur + 1;
	}
	i = 0;
	while (str2[i]) {
		result[cur] = str2[i];
		i = i + 1;
		cur = cur + 1;
	}
	result[cur] = '\0';
	return (result);
}