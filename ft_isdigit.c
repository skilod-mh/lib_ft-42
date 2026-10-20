/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 10:01:59 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/20 16:33:00 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

/*int	main ()
{
	char c = 'd';
	if (isdigit(c))
	{
		printf("%c is a digit \n", c);
	}
	else
		printf("%c is not digit \n" ,c);
	return 0;
}*/

#include "libft.h"
int ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return(1);
	}
	else 
		return (0);
}
/*int main ()
{
	char c = '\0';
	if (ft_isdigit(c))
	printf("%c is a digit \n" , c);
	else
		printf ("%c not digit", c);
	return (0);
}*/
