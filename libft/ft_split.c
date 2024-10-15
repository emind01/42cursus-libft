/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muduran <muduran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 22:46:33 by muduran           #+#    #+#             */
/*   Updated: 2024/10/15 03:50:04 by muduran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str)
			count++;
		while (*str && *str != c)
			str++;
	}
	return (count);
}

static int	word_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**free_all(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char			**ret_val;
	unsigned int	j;
	unsigned int	a;

	ret_val = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!ret_val)
		return (NULL);
	a = -1;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			ret_val[++a] = (char *)malloc((word_len(s, c) + 1) * sizeof(char));
			if (!ret_val[a])
				return (free_all(ret_val));
			j = 0;
			while (*s && *s != c)
				ret_val[a][j++] = *s++;
			ret_val[a][j] = '\0';
		}
	}
	ret_val[++a] = NULL;
	return (ret_val);
}

/*
int main()
{
	char *str = "Fatih furkan,mustafa";
	char ayirici = ',';
	char **sonuc = ft_split(str,ayirici);

 	printf("%s\n",(char *)sonuc[0]);
 	printf("%s",(char *)sonuc[1]);
 }
 */