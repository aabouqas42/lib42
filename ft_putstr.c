/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:11:54 by aabouqas          #+#    #+#             */
/*   Updated: 2023/12/07 10:33:01 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

int	ft_putstr(char *str)
{
	if (!str)
		return (write (1, "(null)", 6));
	return (write (1, str, ft_strlen(str)));
}
