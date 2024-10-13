/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:19:30 by muduran           #+#    #+#             */
/*   Updated: 2024/10/13 11:44:11 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[j] && j < len)
	{
		i = 0;
		while (needle[i] && haystack[j + i] == needle[i] && (j + i) < len)
			i++;
		if (!needle[i])
			return ((char *)(haystack + j));
		j++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char hs[] = "abceminde";
	char n[] = "emin";
	
	printf("%s\n", ft_strnstr(hs, n, ft_strlen(hs)));
	printf("%s\n", strnstr(hs, n, ft_strlen(hs)));
	return 0;
}
*/