/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:42:03 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/23 13:45:43 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"
char  *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	l;
	size_t	j;
	char	*str;

	j = 0;
	i = 0;
	if (!s1 || !set)
                return (NULL);
	l = ft_strlen(s1);
	while (s1[i] && ft_strchr(set,s1[i]))
		i++;
	while (l > i && ft_strchr(set, s1[l - 1]))
		l--;
	str = malloc ((l - i) +1);
	if (!str)
		return (NULL);
	while (i < l)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
