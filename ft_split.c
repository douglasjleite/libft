#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
		{
			i++;
		}
		if (s[i])
			count++;
		while (s[i] != c && s[i])
		{
			i++;
		}
	}
	return (count);
}

static char	**ft_free_all(char **matrix, int i)
{
	while (i > 0)
	{
		i--;
		free(matrix[i]);
	}
	free(matrix);
	return (NULL);
}

static	char	**ft_fill_matrix(char **res, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			j = i;
			while (s[j] && s[j] != c)
				j++;
			res[k] = ft_substr(s, i, j - i);
			if (!res[k])
				return (ft_free_all(res, k));
			k++;
			i = j;
		}
	}
	res[k] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	words;

	if(!s)
		return (NULL);
	words = ft_count_words(s, c);
	res = malloc((words + 1) * sizeof(char *));
	if(!res)
		return (NULL);
	return (ft_fill_matrix(res, s, c));
}
