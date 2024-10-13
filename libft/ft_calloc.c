/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:44:05 by muduran           #+#    #+#             */
/*   Updated: 2024/10/13 13:42:03 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_s;
	void	*total_m;

	total_s = count * size;
	total_m = malloc(total_s);
	if (total_m != NULL)
		ft_bzero(total_m, total_s);
	return (total_m);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main() 
{
   int n = 5;
   int *array;
   

   array = (int*)ft_calloc(n, sizeof(int));
   if (array == NULL) {
    	printf("Memory allocation failed!\n");
      return 1;
	}
   printf("Array elements after calloc: ");
   for (int i = 0; i < n; i++) {
      printf("%d ", array[i]);
	}
   printf("\n");
   free(array);
   return 0;
}
*/