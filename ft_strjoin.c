/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:14:31 by aabouqas          #+#    #+#             */
/*   Updated: 2023/12/07 10:33:14 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	len = 0;
	if (s1 && *s1)
		len += ft_strlen(s1);
	if (s2 && *s2)
		len += ft_strlen(s2);
	str = malloc (len + 1);
	if (!str)
		return (NULL);
	len = 0;
	if (s1)
		while (*s1)
			str[len++] = *s1++;
	if (s2)
		while (*s2)
			str[len++] = *s2++;
	str[len] = 0;
	return (str);
}
