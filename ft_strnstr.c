/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerrod <tjerrod@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 00:55:17 by tjerrod           #+#    #+#             */
/*   Updated: 2020/05/25 10:22:34 by tjerrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;

	i = 0;
	if (*little == 0)
		return ((char *)big);
	while (*big && (size_t)i < len)
	{
		if (big[i] == little[0])
		{
			j = 1;
			while (big[i + j] == little[j] && little[j] &&
			(size_t)(i + j) < len)
				j++;
			if (little[j] == 0)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (0);
}
