/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:26:45 by aabouqas          #+#    #+#             */
/*   Updated: 2023/12/07 10:33:35 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

int	find(const char *str, char c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*str;
	size_t	e;
	size_t	len;

	if (!s || !set)
		return (NULL);
	len = ft_strlen((const char *)s);
	while (find(set, *s))
	{
		s++;
		len--;
	}
	e = ft_strlen(s) - 1;
	if (!*s)
		return (ft_strdup(""));
	while (find(set, s[e]))
	{
		e--;
		len--;
	}
	str = malloc (len + 1);
	if (!str)
		return (NULL);
	return (ft_strncpy(str, s, len));
}
