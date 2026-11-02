/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohoussa <mohoussa@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 19:44:10 by mohoussa          #+#    #+#             */
/*   Updated: 2026/10/31 21:15:59 by mohoussa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_fail(t_list **lst, void *content, void (*del)(void *))
{
	if (content)
		del (content);
	ft_lstclear(lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;
	void	*content;

	if (!f || !del || !lst)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (ft_fail(&new_list, NULL, del));
		node = ft_lstnew(content);
		if (!node)
			return (ft_fail (&new_list, content, del));
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
