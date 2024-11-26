#include <unistd.h>

int	ft_small_atoi(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	return (nb);
}

void	print_hex(int n)
{
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	if (n >= 16)
		print_hex(n / 16);
	write(1, &hex_digits[n % 16], 1);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		print_hex(ft_small_atoi(av[1]));
	write(1, "\n", 1);
	return (0);
}
