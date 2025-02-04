/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:10:17 by muduran           #+#    #+#             */
/*   Updated: 2024/10/14 19:29:23 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*fstr;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	fstr = malloc(len);
	if (!fstr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		fstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		fstr[i + j] = s2[j];
		j++;
	}
	fstr[i + j] = '\0';
	return (fstr);
}
