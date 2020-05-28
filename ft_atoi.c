/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerrod <tjerrod@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 11:05:00 by tjerrod           #+#    #+#             */
/*   Updated: 2020/05/25 11:38:14 by tjerrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int res;
	int negative;

	res = 0;
	negative = 1;
	while (*nptr && (*nptr == ' ' || *nptr == '\n' || *nptr == '\t' ||
	*nptr == '\v' || *nptr == '\f' || *nptr == '\r'))
		nptr++;
	if (*nptr == '-')
		negative = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr && *nptr <= '9' && *nptr >= '0')
	{
		res = res * 10 + (*nptr - 48);
		nptr++;
	}
	return (res * negative);
}
