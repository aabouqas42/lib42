/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:59:49 by aabouqas          #+#    #+#             */
/*   Updated: 2024/05/25 14:44:53 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

void	ft_lstadd_front(t_list **head, t_list *newhead)
{
	if (newhead == NULL || head == NULL)
		return ;
	newhead->next = *head;
	*head = newhead;
}
