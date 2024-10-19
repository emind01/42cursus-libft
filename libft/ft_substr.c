/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:41:27 by muduran           #+#    #+#             */
/*   Updated: 2024/10/19 17:29:55 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	sublen;
	char	*substr;

	sublen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > sublen)
		return (ft_strdup(""));
	else if (len > (sublen - start))
		len = sublen - start;
	substr = (char *) malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[len] = '\0';
	return (substr);
}

/*
int main()
{ 
	char s[] = "abcemindef";
	unsigned int start = 3;
	size_t len = 4;

	printf("%s", ft_substr(s, start, len));
}
*/