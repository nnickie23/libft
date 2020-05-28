/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerrod <tjerrod@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 23:34:31 by tjerrod           #+#    #+#             */
/*   Updated: 2020/05/26 17:15:15 by tjerrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;
	size_t			i;

	ptr = (unsigned char*)dest;
	ptr2 = (unsigned char*)src;
	i = 1;
	if (ptr2 < ptr)
	{
		while (i <= n)
		{
			ptr[n - i] = ptr2[n - i];
			i++;
		}
	}
	else
	{
		while (n > 0)
		{
			*(ptr++) = *(ptr2++);
			n--;
		}
	}
	return (dest);
}
