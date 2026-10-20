/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 09:51:53 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/20 16:31:46 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') 
		|| (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else 
		return (0);
}
/*int	main ()
{
	char c;

	c = 's';
	if (isalpha(c))
	{
		printf("%c is alpha", c);
	}
	else 
	{
		printf("%c is not alpha", c );
	}
}*/
