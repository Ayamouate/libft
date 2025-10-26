/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymouate <aymouate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:42:39 by aymouate          #+#    #+#             */
/*   Updated: 2025/10/25 23:16:31 by aymouate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*d;
	int		n;
	int		i;

	n = 0;
	while (s[n])
		n++;
	d = malloc((n + 1) * sizeof(char));
	if (!d)
		return (NULL);
	i = 0;
	while (s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
