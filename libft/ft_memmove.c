/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 08:55:30 by muduran           #+#    #+#             */
/*   Updated: 2024/10/22 15:55:01 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst == src || len == 0)
		return (dst);
	if (dst1 < src1)
		return (ft_memcpy(dst, src, len));
	else
	{
		while (len--)
			dst1[len] = src1[len];
	}
	return (dst);
}
