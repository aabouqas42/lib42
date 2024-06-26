/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:11:54 by aabouqas          #+#    #+#             */
/*   Updated: 2024/05/25 15:30:15 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

int	ft_putstr(int fd, char *str)
{
	if (str == NULL)
		return (write (fd, "(null)", 6));
	return (write (fd, str, ft_strlen(str)));
}
