/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:32:38 by mapham            #+#    #+#             */
/*   Updated: 2024/10/29 16:42:36 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_search_and_replace(char *str, char search, char replace)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == search)
			write(1, &replace, 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		if (av[2][1] == '\0' && av[3][1] == '\0')
			ft_search_and_replace(av[1], av[2][0], av[3][0]);
	}
	write(1, "\n", 1);
}
