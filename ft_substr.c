/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerrod <tjerrod@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 17:35:18 by tjerrod           #+#    #+#             */
/*   Updated: 2020/05/27 13:53:51 by tjerrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;

	if (str == NULL)
		return (NULL);
	if ((size_t)start >= ft_strlen(str))
	{
		if (!(substr = malloc(sizeof(char) * 1)))
			return (NULL);
		*substr = '\0';
		return (substr);
	}
	len = ft_strlen(str) - start < len ? ft_strlen(str) - start : len;
	if (!(substr = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strlcpy(substr, &str[start], (len + 1));
	return (substr);
}
