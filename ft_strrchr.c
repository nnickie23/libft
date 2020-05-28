/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerrod <tjerrod@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 11:50:45 by tjerrod           #+#    #+#             */
/*   Updated: 2020/05/25 00:53:57 by tjerrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *last_found;

	while (*str)
	{
		if (*str == (char)c)
			last_found = (char *)str;
		str++;
	}
	if (last_found)
		return (last_found);
	if (c == 0)
		return ((char *)str);
	return (0);
}
