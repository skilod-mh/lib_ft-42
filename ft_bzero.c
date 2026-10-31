/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <mohoussa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 10:40:35 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/30 20:55:55 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n > 0)
	{
		*p = 0;
		p++;
		n--;
	}
}
#include <stdio.h>
int main ()
{
	int s[4][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9},
    {10, 11, 12}
};
int j;
	int i = 0;
	ft_bzero(*s,sizeof(s));
	while (i < 4)
	{
		j = 0;
		while (j < 3)
		{
		printf ("%d\n",*s[i]);
		j++;
	}
		i++;
	}
}