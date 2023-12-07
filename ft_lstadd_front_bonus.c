/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:59:49 by aabouqas          #+#    #+#             */
/*   Updated: 2023/12/07 10:31:52 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

void	ft_lstadd_front(t_list **head, t_list *newhead)
{
	if (!newhead || !head)
		return ;
	newhead->next = *head;
	*head = newhead;
}
