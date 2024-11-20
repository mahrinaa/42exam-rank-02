/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 23:28:08 by mapham            #+#    #+#             */
/*   Updated: 2024/10/30 23:41:35 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}

int	is_prime(int num)
{
	int	i;

	i = 2;
	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	putnbr(int n)
{
	char	digit;

	if (n >= 10)
		putnbr(n / 10);
	digit = n % 10 + '0';
	write(1, &digit, 1);
}

int	main(int ac, char **av)
{
	int	nb;
	int	sum;

	if (ac == 2)
	{
		nb = ft_atoi(av[1]);
		sum = 0;
		while (nb > 0)
		{
			if (is_prime(nb))
				sum += nb;
			nb--;
		}
		putnbr(sum);
	}
	if (ac != 2)
		putnbr(0);
	write(1, "\n", 1);
	return (0);
}
