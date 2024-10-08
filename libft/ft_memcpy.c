/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 19:34:35 by muduran           #+#    #+#             */
/*   Updated: 2024/10/08 19:57:28 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d == NULL && s == NULL)
		return (0);
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}

/*
#include <string.h>
int main() {
    const char *source = "Hello, World!";
    char destination1[20]; // For ft_memcpy
    char destination2[20]; // For original memcpy

    // Using ft_memcpy to copy data
    ft_memcpy(destination1, source, ft_strlen(source) + 1); 

    // Using original memcpy to copy data
    memcpy(destination2, source, ft_strlen(source) + 1); 

    // Output the results
    printf("Source: %s\n", source);
    printf("ft_memcpy Destination: %s\n", destination1);
    printf("memcpy Destination: %s\n", destination2);

    // Check if both results are the same
    if (strcmp(destination1, destination2) == 0) {
        printf("Both ft_memcpy and memcpy produced the same result.\n");
    } else {
        printf("The results of ft_memcpy and memcpy differ.\n");
    }

    return 0;
}
*/