/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:34:34 by muduran           #+#    #+#             */
/*   Updated: 2024/10/22 15:56:27 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]) != 0)
		i++;
	len = ft_strlen(s1) - i;
	while (s1[i] && ft_strchr(set, s1[i + len - 1]) != 0)
		len--;
	str = malloc(len + 1);
	if (!str)
		return (0);
	ft_strlcpy(str, s1 + i, len + 1);
	return (str);
}
