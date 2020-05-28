/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerrod <tjerrod@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 14:42:09 by tjerrod           #+#    #+#             */
/*   Updated: 2020/05/26 17:15:05 by tjerrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	size_t	i;
	void	*ptr;

	ptr = malloc(number * sizeof(size));
	if (ptr == 0)
		return (ptr);
	i = 0;
	while (i++ < number)
		((char *)ptr)[i] = 0;
	return (ptr);
}
