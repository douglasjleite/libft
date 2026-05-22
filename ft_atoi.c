#include "libft.h"

int ft_atoi(const char *str)
{
	int 		i;
	int 		signal;
	long long	result;

	i = 0;
	signal = 1;
	result = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			signal = -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		if (result > 2147483647 && signal == 1)
		{
			return (-1);
		}
		if (result > 2147483648 && signal == -1)
		{
			return (0);
		}
		i++;
	}
	return (result * signal);
}
