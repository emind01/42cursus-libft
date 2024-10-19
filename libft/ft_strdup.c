/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 14:16:05 by muduran           #+#    #+#             */
/*   Updated: 2024/10/19 18:00:32 by muduran          ###   ########.fr       */
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
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char s[] = "Emin Duran";
	
    char* t1 = ft_strdup(source); 
	char* t2 = strdup(source); 

	printf("%p   %s   %p\n", &s, t1, ft_strdup(s));
    printf("%s   %p"  , t2, strdup(s));
    return 0;
}
*/