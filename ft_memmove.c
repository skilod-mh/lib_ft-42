/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:59:42 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/19 17:47:48 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char 	*d;
	unsigned char	*s;
	size_t	i;

	i = 0;
	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	if (!dest && !src)
		return(NULL);
	if (d > s)
	{
		while(n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}	
	}

	return (dest);
}
/*#include <stdio.h>
int main ()
{
	char dest [5] = "";
	char src [] = "hello";
	printf("here is dest :%s",ft_memmove(dest,src,4));
}*/
