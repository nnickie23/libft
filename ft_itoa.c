/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerrod <tjerrod@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/27 19:39:07 by tjerrod           #+#    #+#             */
/*   Updated: 2020/05/27 21:00:38 by tjerrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		int_len(int n)
{
	int		res;

	res = 0;
	if (n <= 0)
		res = 1;
	while (n)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int				sign;
	unsigned int	nbr;
	int				res_len;
	char			*res;

	sign = 1;
	res_len = int_len(n);
	if (!(res = malloc(sizeof(char) * (res_len + 1))))
		return (NULL);
	if (n < 0)
	{
		sign = -1;
		nbr = -n;
	}
	else
		nbr = n;
	res[res_len] = '\0';
	while (--res_len >= 0)
	{
		res[res_len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (sign == -1)
		res[0] = '-';
	return (res);
}
