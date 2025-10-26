/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymouate <aymouate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:16:41 by aymouate          #+#    #+#             */
/*   Updated: 2025/10/26 15:53:37 by aymouate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ln;
	t_list	*node;
	void	*content;

	ln = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst -> content);
		node = ft_lstnew(content);
		if (!node)
		{
			ft_lstclear(&ln, del);
			return (NULL);
		}
		lst = lst -> next;
		ft_lstadd_back(&ln, node);
	}
	return (ln);
}
