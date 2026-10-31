/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <mohoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 10:59:42 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/30 10:24:54 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char   *d;
	const unsigned char *s;

    size_t	i;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    if (d > s)
    {
	    while (n > 0)
	    {
		    n--;
		    d[n] = s[n];
	    }
    }
    else
    {
	    i = 0;
	    while (i < n)
	    {
		    d[i] = s[i];
	    	    i++;
	    }
    }
    return (dest);
}
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *volatile s = NULL;

	ft_memmove(s , s, 3);
	//memmove (s,s,3);
}
