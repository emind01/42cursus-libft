/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 10:34:28 by muduran           #+#    #+#             */
/*   Updated: 2024/10/12 12:10:13 by muduran          ###   ########.fr       */
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
/*
int main() {
    char s[] = "duran";
    char d1[15] = "emin";
    char d2[15] = "emin"; 
	int a = 15;

    size_t result1 = ft_strlcat(d1, s, a);
    printf(" %s  %zu\n", d1, result1);

    size_t result2 = strlcat(d2, s, a);
    printf(" %s  %zu\n", d2, result2);

    return 0;
}
*/