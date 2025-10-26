/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymouate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:41:58 by aymouate          #+#    #+#             */
/*   Updated: 2025/10/19 15:37:38 by aymouate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		if (f)
			f(lst -> content);
		lst = lst -> next;
	}
}
/*void	addtwo(void *content)
{
	*(int *)content += 2;
}
#include <stdio.h>
void	printlist(t_list *l)
{
	while (l)
	{
		printf("%d ->", *(int *)l -> content);
		l = l -> next;
	}
}
int main()
{
	t_list *l, *ln;
	int nb = 55, nbr = 48;
	l = ft_lstnew(&nb);
	ln = ft_lstnew(&nbr);
	ft_lstadd_back(&l, ln);
	printf("\nbefore: ");
	printlist(l);
	printf("\nafter: ");
	ft_lstiter(l, addtwo);
	printlist(l);
	return (0);
}*/
