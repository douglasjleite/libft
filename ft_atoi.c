#include "libft.h"

static int	ft_skip_spaces_and_sign(const char *str, int *i)
{
	int	signal;

	signal = 1;
	while ((str[*i] >= '\t' && str[*i] <= '\r') || str[*i] == 32)
		(*i)++;
	if (str[*i] == '-' || str[*i] == '+')
	{
		if (str[*i] == '-')
			signal = -1;
		(*i)++;
	}
	return (signal);
}

static int	ft_check_overflow(long result, int signal)
{
	if (result > 2147483647L && signal == 1)
		return (-1);
	if (result > 2147483648L && signal == -1)
		return (0);
	return (1);
}

int ft_atoi(const char *str)
{
	int		i;
	int		signal;
	long	result;
	int		overflow_status;

	i = 0;
	result = 0;
	overflow_status = 0;
	signal = ft_skip_spaces_and_sign(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		overflow_status = ft_check_overflow(result, signal);
		if (overflow_status != 1)
			return (overflow_status);
		i++;
	}
	return (result * signal);
}
