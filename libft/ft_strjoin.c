/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:10:17 by muduran           #+#    #+#             */
/*   Updated: 2024/10/13 18:06:20 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len1;
	size_t	len2;
	char	*fstr;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	fstr = malloc(len1 + len2 + 1);
	if (!len1)
		return (s2);
	else if (!len2)
		return (s1);
	i = 0;
	while (s1[i])
	{
		fstr[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		fstr[i + len1] = s2[i];
		i++;
	}
	fstr[i + len1] = '\0';
	return (fstr);
}
