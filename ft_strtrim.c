/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerrod <tjerrod@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 11:10:40 by tjerrod           #+#    #+#             */
/*   Updated: 2020/05/27 14:16:40 by tjerrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	s1_len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, (int)*s1))
		s1++;
	s1_len = ft_strlen(s1);
	while (s1_len && ft_strchr(set, (int)s1[s1_len]))
		s1_len--;
	res = ft_substr((char *)s1, 0, (s1_len + 1));
	return (res);
}
