#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	string_length;
	char	*duplicated_string;
	size_t	i;

	string_length = ft_strlen(s1);
	duplicated_string = malloc(string_length + 1);
	if (!duplicated_string)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		duplicated_string[i] = s1[i];
		i++;
	}
	duplicated_string[i] = '\0';
	return (duplicated_string);
}
