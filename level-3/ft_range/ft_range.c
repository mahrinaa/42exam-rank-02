#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	len;
	int	*res;

	i = 0;
	len = abs((end - start)) + 1;
	res = (int *)malloc(sizeof(int) * len);
	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	return (res);
}

int	main(int ac, char **av)
{
	int *res;
	if (ac == 3)
	{
		res = ft_range(atoi(av[1]), atoi(av[2]));
		printf("%c", res);
	}
}