/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 10:34:28 by muduran           #+#    #+#             */
/*   Updated: 2024/10/22 15:59:02 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	s;
	size_t	d;

	i = 0;
	s = ft_strlen(src);
	d = ft_strlen(dst);
	if (dstsize <= d)
		return (dstsize + s);
	else
	{
		while (src[i] && (d + i) < dstsize - 1)
		{
			dst[d + i] = src[i];
			i++;
		}
		dst[d + i] = '\0';
	}
	return (s + d);
}
