/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:35:54 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/12 12:01:59 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>*/
#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else 
		return (0);
}
/*int	main ()
{
	char c = '9';
	if (isalnum(c))
		printf (" %c true\n", c);
	else 
		printf ("%c not \n",c);
        if (ft_isalnum(c))
                printf (" %c true\n", c);
        else
                printf ("%c not \n",c);
}*/

