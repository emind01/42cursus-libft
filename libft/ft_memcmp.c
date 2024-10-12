/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:56:35 by muduran           #+#    #+#             */
/*   Updated: 2024/10/12 16:17:57 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ucs1;
	const unsigned char	*ucs2;

	ucs1 = (const unsigned char *)s1;
	ucs2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*ucs1 != *ucs2)
			return (*ucs1 - *ucs2);
		ucs1++;
		ucs2++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int main() {
   int arr1[] = {1, 2, 3, 4, 5};
   int arr2[] = {1, 2, 3, 4, 6};

   int result = ft_memcmp(arr1, arr2, 16);

   if (result == 0) {
       printf("Arrays are equal\n");
   } else {
       printf("Arrays are not equal\n");
   }
    return 0;
}
*/