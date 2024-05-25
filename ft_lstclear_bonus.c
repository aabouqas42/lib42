/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:11:21 by aabouqas          #+#    #+#             */
/*   Updated: 2024/05/25 14:45:07 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*curr;

	if (del == NULL || lst == NULL)
		return ;
	node = *lst;
	while (node)
	{
		curr = node->next;
		del(node->content);
		free (node);
		node = curr;
	}
	*lst = NULL;
}
