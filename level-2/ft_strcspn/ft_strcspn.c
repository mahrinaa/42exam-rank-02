/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:01:15 by mapham            #+#    #+#             */
/*   Updated: 2024/10/28 18:29:06 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	*s;
	char	*reject;
	size_t	result;

	s = "Hello world";
	reject = "aeiou";
	result = ft_strcspn(s, reject);
	printf("s = '%s' sans les caracteres '%s' de reject = %zu\n", s, reject,
		result);
	return (0);
} */
