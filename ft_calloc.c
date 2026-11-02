/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <mohoussa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 15:58:05 by mohoussa          #+#    #+#             */
/*   Updated: 2026/11/01 20:10:33 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*s;

	if (nmemb != 0 && size > SIZE_MAX / nmemb)
		return (NULL);
	s = malloc (nmemb * size);
	if (!s)
		return (NULL);
	ft_bzero (s, nmemb * size);
	return (s);
}
