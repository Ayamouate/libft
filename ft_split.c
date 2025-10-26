/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymouate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:17:19 by aymouate          #+#    #+#             */
/*   Updated: 2025/10/22 11:44:45 by aymouate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *str, char sep)
{
	int	i;
	int	word;
	int	count;

	word = 0;
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != sep)
		{
			if (word == 0)
			{
				count++;
				word = 1;
			}
		}
		else
			word = 0;
		i++;
	}
	return (count);
}

static void	ft_freetab(char **tab)
{
	int	i;

	if (!tab)
		return ;
	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static char	**ft_split2(char const *s, char c, char **tab, int wd)
{
	int (i), (j), (start);
	i = 0;
	j = 0;
	while (j < wd)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		tab[j] = ft_substr(s, start, (i - start));
		if (!tab[j])
		{
			ft_freetab(tab);
			return (NULL);
		}
		j++;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		wd;

	if (s == NULL)
		return (NULL);
	wd = ft_word_count(s, c);
	tab = malloc(sizeof(char *) * (wd + 1));
	if (!tab)
		return (NULL);
	return (ft_split2(s, c, tab, wd));
}
