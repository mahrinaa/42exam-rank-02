/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 18:07:46 by mapham            #+#    #+#             */
/*   Updated: 2024/10/11 18:40:21 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a'
				&& str[i] <= 'm'))
			str[i] += 13;
		else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n'
				&& str[i] <= 'z'))
			str[i] -= 13;
		ft_putchar(str[i]);
		i++;
	}
}

/* void	ft_rot_13(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] >= 9 && str[i] <= 64)
		{
			ft_putchar(str[i]);
			i++;
		}
		if ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A'
				&& str[i] <= 'M'))
		{
			str[i] += 13;
			ft_putchar(str[i]);
		}
		else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N'
				&& str[i] <= 'Z'))
		{
			str[i] -= 13;
			ft_putchar(str[i]);
		}
		i++;
	}
} */
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_rot_13(av[1]);
	}
	ft_putchar('\n');
}
