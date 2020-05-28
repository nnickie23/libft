/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerrod <tjerrod@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 10:27:34 by tjerrod           #+#    #+#             */
/*   Updated: 2020/05/26 12:10:47 by tjerrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	int i;

	i = 0;
	if (len == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && (size_t)i < len - 1)
		i++;
	return ((int)s1[i] - (int)s2[i]);
}
