/*
** EPITECH PROJECT, 2017
** my_str_to_word_array
** File description:
** 
*/

int     is_charac(char c, int status)
{
	if (status == 1) {
		if (c >= 33 && c <= 126)
	        	return(1);
	}else if (status == 2) {		
		if (c >= 33 && c <= 126 && c != 58)
	        	return(1);
	}
	return(0);
}

int	coumpt(char *str)
{
	int	a = 0;
	int	b = 0;
	while (str[a] != '\0'){
		if (is_charac(str[a], 1) == 1 && is_charac(str[a + 1], 1) != 1){
			b = b + 1;
		}
		a = a + 1;
	}
	return (b);
}

int len_of_word(char *str, int i)
{
        while (str[i] != '\0') {
                if (is_charac(str[i], 1) != 1)
                        return (i);
                i++;
        }
        return (i);
}


char **my_str_to_word_array(char *str)
{
	int	y = coumpt(str);
	char	**result = malloc(sizeof(char *) * y + 1);
	int	a = 0;
	int	b = 0;
	int	c = 0;

	
	while (b < y){
		c = 0;
		result[b] = malloc(sizeof(char) * len_of_word(str, a));
		while (str[a] != '\0' && is_charac(str[a], 1) != 0) {
			result[b][c] = str[a];
			c = c + 1;
			a = a + 1;
		}
		result[b][c] = '\0';
		a = a + 1;
		b = b + 1;
	}
	return (result);
}