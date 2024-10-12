/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:53:09 by muduran           #+#    #+#             */
/*   Updated: 2024/10/12 18:10:21 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

/*
int main() {
 
 char a[]="dfghjk";
 ft_bzero(a,4);
 bzero(a,4);
 printf("%s\n",a);
 printf("%s",a);

    return 0;
}
*/