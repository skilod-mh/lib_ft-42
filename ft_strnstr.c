/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 18:48:48 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/19 18:25:42 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h>
char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i <= len)
	{
		while (s1[i])
		{
			j = 0;
			while (s2[j])
			{
				if (s1[i + j] == s2[j])
				{
					j++;
				}
				j++;
			}
			if (s2[j] == "\0")
        		{
         		       return ((char *)&s1[i]);
        		}
			i++;
		}
	}
	return (NULL);
}
#include <stdio.h>
int main ()
{
	char s1[] = "hello world";
	char s2[] = "world";
	printf ("%s",ft_strnstr(s1,s2,10));
}
