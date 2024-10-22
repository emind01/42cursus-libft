/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:44:05 by muduran           #+#    #+#             */
/*   Updated: 2024/10/22 15:53:59 by muduran          ###   ########.fr       */
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
