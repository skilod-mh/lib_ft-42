/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <mohoussa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 09:19:39 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/31 21:47:54 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_helper(const char *nptr, int *i, int s, long *r)
{
	int	digit;

	while (nptr[*i] >= '0' && nptr[*i] <= '9')
	{
		digit = nptr[*i] - '0';
		if (*r > (LONG_MAX - digit) / 10)
		{
			if (s == -1)
				return (0);
			return (-1);
		}
		*r = *r * 10 + digit;
		(*i)++;
	}
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	long	r;
	int		s;
	int		status;

	s = 1;
	i = 0;
	r = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			s = -1;
		i++;
	}
	status = ft_helper(nptr, &i, s, &r);
	if (status != 1)
		return (status);
	return ((int)r * s);
}
