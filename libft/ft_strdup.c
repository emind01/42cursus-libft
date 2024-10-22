/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:16:05 by muduran           #+#    #+#             */
/*   Updated: 2024/10/22 15:55:35 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s_c;

	len = ft_strlen(s1);
	s_c = malloc(len + 1);
	if (!(s_c))
		return (NULL);
	ft_memcpy(s_c, s1, len + 1);
	return (s_c);
}
