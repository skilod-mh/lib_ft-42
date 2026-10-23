/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:58:05 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/22 16:12:38 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	unsigned char	*s;

	i = 0;
	s = malloc (nmemb * size);
	if (!s)
		return (NULL);
	ft_bzero(s,nmemb * size);
	return (s);
}
