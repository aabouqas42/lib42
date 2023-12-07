/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:03:46 by aabouqas          #+#    #+#             */
/*   Updated: 2023/12/07 10:33:32 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*i_found_it_hhh;
	char	*str;

	i_found_it_hhh = 0;
	str = (char *)s;
	while (*str)
	{
		if (*str == (char)c)
			i_found_it_hhh = str;
		str++;
	}
	if (*str == (char)c)
		return (str);
	return (i_found_it_hhh);
}
