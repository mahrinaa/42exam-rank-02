#include <stdlib.h>
#include <unistd.h>

void	write_word(char *start, char *end)
{
	while (start < end)
	{
		write(1, start, 1);
		start++;
	}
}

void	ft_rostring(char *str)
{
	int		i;
	char	*start_word;
	char	*end_word;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	start_word = &str[i];
	while (str[i] && !(str[i] == ' ' || str[i] == '\t'))
		i++;
	end_word = &str[i];
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i])
	{
		while (str[i])
		{
			if (str[i] == ' ' || str[i] == '\t')
			{
				while (str[i] == ' ' || str[i] == '\t')
					i++;
				if (str[i])
					write(1, " ", 1);
			}
			else
			{
				write(1, &str[i], 1);
				i++;
			}
		}
		write(1, " ", 1);
	}
	write_word(start_word, end_word);
}

int	main(int ac, char **av)
{
	if (ac > 1)
		ft_rostring(av[1]);
	write(1, "\n", 1);
	return (0);
}
