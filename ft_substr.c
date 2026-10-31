/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 20:00:39 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/30 10:20:20 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc(len + 1);
	if (!s)
		return (NULL);
	if (start > len)
		return ("");
	if (start > ft_strlen(s + start))
		return ("");
	while (len > 0)
	{
		p[i] = s[start];
		start++;
		i++;
		len--;
	}
	p[i] = '\0';
	return (p);
}
