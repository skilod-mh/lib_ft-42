/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 12:19:58 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/20 16:34:09 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 0 && c <= 31 )
		|| c == 127)
	{
		return (0);
	}
	else
		return (1);
}
/*#include <stdio.h>
int main ()
{
	char c;
	c = ;
	if (ft_isprint(c))
	printf("%c true",c);
	else
		printf("%c not false",c);
}*/
