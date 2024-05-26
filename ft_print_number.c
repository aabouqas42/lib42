/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:02:46 by aabouqas          #+#    #+#             */
/*   Updated: 2024/05/26 09:31:29 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

int	ft_print_number(int fd, int num)
{
	size_t	size;
	char	*str;

	str = ft_itoa(num);
	if (str == NULL)
		return (-1);
	ft_putstr_fd(str, fd);
	size = ft_strlen(str);
	free (str);
	return (size);
}
