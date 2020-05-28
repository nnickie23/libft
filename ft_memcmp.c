/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerrod <tjerrod@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 04:04:23 by tjerrod           #+#    #+#             */
/*   Updated: 2020/05/04 04:13:41 by tjerrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	unsigned char *ptr;
	unsigned char *ptr2;

	ptr = (unsigned char*)arr1;
	ptr2 = (unsigned char*)arr2;
	while (n > 0)
	{
		if (*ptr != *ptr2)
			return ((int)(*ptr - *ptr2));
		else
		{
			ptr++;
			ptr2++;
		}
		n--;
	}
	return (0);
}
