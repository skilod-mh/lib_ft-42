/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:24:45 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/22 15:24:50 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include <stdio.h>
#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const	unsigned char *p;

	p = (const unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (p[i] ==(unsigned char)c)
			return((void *)(p + i));
		i++;	
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[] = "hello world";

    printf("%p\n", ft_memchr(s, 'o', 11));
    printf("%p\n", memchr(s, 'o', 11));   // يجب أن يطابق السابق
	char	b[] = {'a', 'b', '\0', 'c', 'd'};

	printf("%p %p\n", ft_memchr(s, 'o', 11), memchr(s, 'o', 11));
	printf("%p %p\n", ft_memchr(s, 'z', 11), memchr(s, 'z', 11));   // NULL
	printf("%p %p\n", ft_memchr(s, 'h', 0), memchr(s, 'h', 0));     // NULL
	printf("%p %p\n", ft_memchr(s, '\0', 12), memchr(s, '\0', 12)); // يجد \0
	printf("%p %p\n", ft_memchr(b, 'd', 5), memchr(b, 'd', 5));     // يتجاوز \0
	printf("%p %p\n", ft_memchr(s, 'o' + 256, 11), memchr(s, 'o' + 256, 11));
    return (0);
}*/
