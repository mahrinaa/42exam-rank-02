#include <unistd.h>

int	check_doublon(char *s, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		if (!check_doublon(s1, s1[i], i))
		{
			write(1, &s1[i], 1);
		}
		i++;
	}
	j = 0;
	while (s2[j])
	{
		if (!check_doublon(s1, s2[j], i) && !check_doublon(s2, s2[j], j))
		{
			write(1, &s2[j], 1);
		}
		j++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		ft_union(av[1], av[2]);
	write(1, "\n", 1);
	return (0);
}
