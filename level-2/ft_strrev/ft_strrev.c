#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char    *ft_strrev(char *str)
{
	int i;
	int	len;
	char	tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (i < (len/2))
	{
		tmp = str[i];
		str[i] = str[len - i];
		str[len - i] = tmp;
		i++;
	}
	return (str);
}

char    *ft_strrev2(char *str)
{
	int i;
	int len;
	char tmp;

	i = 0;
	len = ft_strlen(str) - 1; // Ajustement pour l'index 0
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%s\n", ft_strrev(av[1]));
	}
	return (0);
}

