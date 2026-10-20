/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 11:53:55 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/16 12:12:45 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	char	cc;

	cc = (char) c;
	while (*s)
	{
		if (cc ==*s)
		{
			return ((char *)s);
		}
		s++;
	}
	    if (*s == cc)
                {
                        return ((char *)s);
                }
	return (NULL);
}
/*#include<stdio.h>
int main ()
{
	char s[]= "hello @world";
	printf("here is the substring %s",ft_strchr(s,'\0'));
}*/
