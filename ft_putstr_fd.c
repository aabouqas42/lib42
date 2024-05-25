/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:40:23 by aabouqas          #+#    #+#             */
/*   Updated: 2024/05/25 15:29:02 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	write (fd, s, ft_strlen((const char *)s));
}
