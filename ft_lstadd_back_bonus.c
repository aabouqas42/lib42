/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:43:49 by aabouqas          #+#    #+#             */
/*   Updated: 2024/05/25 14:44:39 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (new == NULL || lst == NULL)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	node = *lst;
	while (node->next)
		node = node->next;
	node->next = new;
}
