/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerrod <tjerrod@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 17:48:05 by tjerrod           #+#    #+#             */
/*   Updated: 2020/05/04 04:13:08 by tjerrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char*)dest;
	ptr2 = (unsigned char*)src;
	while (n > 0)
	{
		*ptr = *ptr2;
		ptr++;
		ptr2++;
		n--;
	}
	return (dest);
}
