/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 20:00:39 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/17 20:59:27 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>
int ft_strlen(char *s)
{
  int i;
  
  i = 0;
  while (s[i])
  {
    i++;
  }
  return (i);
  }
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *p;
    int i;
    i = 0;
    p = malloc(len+1);
    if (!s)
        return(NULL);
        if (start > len)
        return ("");
        if (start > ft_strlen(s + start))
        return ("");
    while (len > 0)
    {
        p[i] = s[start];
        start++;
        i++;
        len--;
    }
    p[i] = '\0';
    return (p);
}
#include <stdio.h>
int main ()
{
    char s[] = "Bonjour comment ca va?";
    printf("%s",ft_substr(s, 5, 8));
}
