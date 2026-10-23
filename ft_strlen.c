/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:04:56 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/22 12:04:31 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*#include <stdio.h>
int main ()
{
	char *s;
	s = "h";
	printf("size of the string is :%d",ft_strlen(s));
}
*/
