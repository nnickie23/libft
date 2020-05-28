/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerrod <tjerrod@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 16:05:29 by tjerrod           #+#    #+#             */
/*   Updated: 2020/05/26 17:17:29 by tjerrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int		i;
	int		j;
	size_t	res;

	res = 0;
	i = 0;
	while (src[res++] != '\0')
	{
	}
	if ((res = res + 1) < size)
		i = res - 1;
	else
	{
		res = size;
		i = size - 2;
	}
	j = 0;
	while (i-- >= 0)
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = 0;
	return (res);
}
