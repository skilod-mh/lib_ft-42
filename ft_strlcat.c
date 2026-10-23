/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 10:30:19 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/23 10:16:44 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
//#include "libft.h"
#include <bsd/string.h>
size_t	ft_strlen (const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	dst_len = 0;
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	if (size <= dst_len)
		return (size + ft_strlen(src));
	i = dst_len;
	j = 0;
	while (src[j] != '\0' && i < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + ft_strlen(src));
}
int main ()
{
	char s[3] = "i";
	char t[5] = "amine";
	printf("%zu",strlcat(s,t,10));
	 char r[3] = "ami";
        char z[5] = "amine";
	printf("%zu",ft_strlcat(r,z,10));
	return (0);
}
