/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <mohoussa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:00:35 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/31 21:45:45 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sf;
	unsigned char	*ss;

	if (s1 == s2)
		return (0);
	if (n <= 0)
	{
		return (0);
	}
	sf = (unsigned char *) s1;
	ss = (unsigned char *) s2;
	while (n > 0)
	{
		if (*ss != *sf)
		{
			return (*sf - *ss);
		}
		n--;
		ss++;
		sf++;
	}
	return (0);
}
