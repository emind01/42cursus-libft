/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:36:05 by muduran           #+#    #+#             */
/*   Updated: 2024/10/12 15:53:00 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;
	unsigned char	c2;

	s2 = (unsigned char *)s;
	c2 = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		if (s2[i] == c2)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int main () 
{
   const char str[] = ".Tutorialspoint";
   const char ch = '.';
   char *r2;
   char *ret;
   
   r2 = ft_memchr(str, ch, strlen(str));
   printf("String after |%c| is - |%s|\n", ch, r2);
   
   ret = memchr(str, ch, strlen(str));
   printf("String after |%c| is - |%s|\n", ch, ret);
   return(0);
}
*/