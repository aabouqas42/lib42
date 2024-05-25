/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_base_length.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 15:35:14 by aabouqas          #+#    #+#             */
/*   Updated: 2024/05/25 16:11:14 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

int	get_base_length(int num, int base)
{
	int	len;

	len = 0;
	if (num < 0)
		len++;
	while (num != 0)
	{
		num /= base;
		len++;
	}
	return (len);
}
