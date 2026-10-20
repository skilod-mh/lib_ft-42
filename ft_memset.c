/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:18:56 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/20 16:35:18 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*ptr;
	i = 0;
	ptr	= (unsigned char *)s;
	while (n > 0)
	{
		ptr[i] = (unsigned char)c;
		i++;
		n--;
	}
	return (s);
}
/*#include <stdio.h>
#include <string.h>
int main ()
{
	char s[12] = "HELLO WORLD";
	char d[12] = "hello world";
	printf("before memset :%s\n",s);
	ft_memset(s,259,5);
	printf("after memset :%s\n",s);
	printf("before real memset :%s\n",d);
	  memset(d,259,5);
	    printf("after real memset :%s\n",d);
}
*/
