/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerrod <tjerrod@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 18:11:20 by tjerrod           #+#    #+#             */
/*   Updated: 2020/05/26 17:15:25 by tjerrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;
	size_t				i;

	ptr = (unsigned char*)dest;
	ptr2 = (unsigned char*)src;
	i = 0;
	while (n > i)
	{
		*ptr = *ptr2;
		if (*ptr2 == (unsigned char)c)
		{
			return ((void*)((unsigned char*)dest + i + 1));
		}
		ptr++;
		ptr2++;
		i++;
	}
	return (NULL);
}
