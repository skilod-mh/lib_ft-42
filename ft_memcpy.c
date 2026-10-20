/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:07:38 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/19 12:10:12 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *d;
	unsigned char *s;
	d = (unsigned char*)dest;
	s = (unsigned char*)src;

	i = 0;
	if(!dest && !src)
		return (NULL);
	while(n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dest);
}
/*#include<stdio.h>
#include <stddef.h>
int main()	
{
	char d[] = "hello";
	char s[] = "test";
	printf("dest before :%s\n",d);
	ft_memcpy(&d,&s,2);
	 printf("dest after :%s\n",d);
}*/
