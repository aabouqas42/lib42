/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:11:21 by aabouqas          #+#    #+#             */
/*   Updated: 2023/12/07 10:31:56 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*curr;

	if (!del || !lst)
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
