/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <mohoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:00:35 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/30 18:23:26 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (s1 == s2)
		return (0);
	unsigned char	*sf;
	unsigned char	*ss;
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
			return (*sf -*ss);
		}
		n--;
		ss++;
		sf++;
	}
	return (0);
}
