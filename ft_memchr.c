/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerrod <tjerrod@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 01:13:30 by tjerrod           #+#    #+#             */
/*   Updated: 2020/05/04 03:40:14 by tjerrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char*)arr;
	while (n > 0)
	{
		if (*ptr == (unsigned char)c)
		{
			return ((void*)ptr);
		}
		else
		{
			ptr++;
		}
		n--;
	}
	return (NULL);
}
