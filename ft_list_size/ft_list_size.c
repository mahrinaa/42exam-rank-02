/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapham <mapham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:50:55 by mapham            #+#    #+#             */
/*   Updated: 2024/11/20 16:06:12 by mapham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int	size;

	size = 0;
	while (begin_list != 0)
	{
		size++;
		begin_list = begin_list->next;
	}
	return (size);
}

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

// Fonction pour créer un nouveau nœud
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// Fonction pour libérer la mémoire d'une liste chaînée
void	free_list(t_list *list)
{
	t_list	*temp;

	while (list)
	{
		temp = list->next;
		free(list);
		list = temp;
	}
}
/*
int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	int		size;

	// Création des nœuds
	node1 = ft_lstnew("42 Network");
	node2 = ft_lstnew("Piscine");
	node3 = ft_lstnew("Cursus");

	// Vérification des allocations
	if (!node1 || !node2 || !node3)
	{
		free_list(node1);
		free_list(node2);
		free_list(node3);
		printf("Erreur : Allocation échouée\n");
		return (1);
	}

	// Chaînage des nœuds
	list = node1;
	node1->next = node2;
	node2->next = node3;

	// Calcul de la taille de la liste
	size = ft_list_size(list);

	// Affichage de la taille de la liste
	printf("Taille de la liste : %d\n", size);

	// Libération de la mémoire
	free_list(list);
	return (0);
}*/
