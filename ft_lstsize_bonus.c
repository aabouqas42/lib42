/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:02:47 by aabouqas          #+#    #+#             */
/*   Updated: 2024/05/25 14:48:35 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	if (lst == NULL)
		return (0);
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}
