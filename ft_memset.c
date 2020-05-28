/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerrod <tjerrod@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 17:14:12 by tjerrod           #+#    #+#             */
/*   Updated: 2020/05/03 21:18:28 by tjerrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)s;
	while (n > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
		n--;
	}
	return (s);
}
