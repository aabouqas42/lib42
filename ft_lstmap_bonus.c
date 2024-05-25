/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:43:25 by aabouqas          #+#    #+#             */
/*   Updated: 2024/05/25 14:46:16 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;
	void	*new_content;

	head = NULL;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst)
	{
		new_content = f(lst->content);
		node = ft_lstnew(new_content);
		if (node == NULL)
		{
			del(new_content);
			ft_lstclear(&head, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&head, node);
	}
	return (head);
}
