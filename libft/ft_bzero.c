/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:53:09 by muduran           #+#    #+#             */
/*   Updated: 2024/10/08 18:53:10 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
int main() {
    size_t size = 10;
    char *buffer = malloc(size); 

    if (!buffer) {
        perror("Failed to allocate memory");
        return 1; 
    }
    for (size_t i = 0; i < size; i++) {
        buffer[i] = 'A' + i; 
    }
    printf("Buffer before ft_bzero:\n");
    for (size_t i = 0; i < size; i++) {
        printf("buffer[%zu]: %d ", i, buffer[i]);
    }
    printf("\n");
    ft_bzero(buffer, size);
    printf("Buffer after ft_bzero:\n");
    for (size_t i = 0; i < size; i++) {
        printf("buffer[%zu]: %d ", i, buffer[i]); 
    }
    printf("\n");
    free(buffer);

    return 0;
}
*/