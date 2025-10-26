/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymouate <aymouate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 13:00:13 by aymouate          #+#    #+#             */
/*   Updated: 2025/10/26 15:34:39 by aymouate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	littlelen;
	size_t	i;

	if (!big && len == 0)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	littlelen = ft_strlen(little);
	i = 0;
	while (big[i] && i + littlelen <= len)
	{
		if (big[i] == little[0])
		{
			if (ft_strncmp(big + i, little, littlelen) == 0)
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
