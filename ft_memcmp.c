/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:00:35 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/16 18:49:18 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sf;
	unsigned char	*ss;

	sf = (unsigned char*) s1;
	ss = (unsigned char*) s2;

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
/*#include <stdio.h>
int	main()
{
	char s[] = "bbcdefgh";
	char d[] = "abcdefgh";
	printf("%d\n",ft_memcmp(s,d,2));
}*/
