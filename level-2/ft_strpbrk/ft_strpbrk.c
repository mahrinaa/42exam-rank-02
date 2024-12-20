#include <stddef.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int j;

	j = 0;
	while (s2[j])
	{
		i = 0;
		while (s1[i])
		{
			if (s1[i] == s2[j])
				return ((char *)&s1[i]);
			i++;
		}
		j++;
	}
	return (NULL);
}


#include <stdio.h>
#include <string.h>

int main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%s\n", ft_strpbrk(av[1], av[2]));
		printf("%s\n", strpbrk(av[1], av[2]));
	}
	return (0);
}
