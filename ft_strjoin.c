/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymouate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:20:44 by aymouate          #+#    #+#             */
/*   Updated: 2025/10/22 23:12:18 by aymouate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;

	int (j), (i), (s1len), (s2len);
	if (!s1 ||!s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	result = malloc(s1len + s2len + 1);
	if (!result)
		return (0);
	i = 0;
	j = 0;
	while (i < s1len)
		result[i++] = s1[j++];
	j = 0;
	while (i < s1len + s2len)
		result[i++] = s2[j++];
	result[i] = '\0';
	return (result);
}
