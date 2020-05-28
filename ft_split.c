/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerrod <tjerrod@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 14:17:32 by tjerrod           #+#    #+#             */
/*   Updated: 2020/05/28 00:22:21 by tjerrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		str_num(char const *s, char c)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0' && s[i] != c)
		{
			res++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (res);
}

char	**free_arr(char **arr, int i)
{
	int	j;

	j = 0;
	while (j <= i)
	{
		free(arr[j]);
		j++;
	}
	free(arr);
	return (0);
}

int		len_of_str(char *str, int c)
{
	int	res;

	while (str && *str != c)
	{
		res++;
		str++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		n;
	int		i;
	int		j;
	char	**res;

	i = 0;
	n = str_num(s, c);
	if (!s || !(res = malloc(sizeof(char *) * (n + 1))))
		return (NULL);
	while (i < n)
	{
		if (!(res[i] = malloc(sizeof(char) * len_of_str((char *)s, c))))
			return (free_arr(res, i));
		while (*s == c && *s)
			s++;
		j = 0;
		while (*s && *s != c)
		{
			res[i][j++] = *s++;
		}
		res[i][j] = '\0';
		i++;
	}
	res[i] = 0;
	return (res);
}
