/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymouate <aymouate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 21:17:56 by aymouate          #+#    #+#             */
/*   Updated: 2025/10/25 23:05:58 by aymouate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	destlen = ft_strlen(dst);
	i = destlen;
	j = 0;
	if (size <= destlen)
		return (size + srclen);
	while (src[j] && i < size - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (destlen + srclen);
}
