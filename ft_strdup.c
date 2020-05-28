/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjerrod <tjerrod@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 15:44:28 by tjerrod           #+#    #+#             */
/*   Updated: 2020/05/25 16:11:38 by tjerrod          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*res;
	int		i;

	i = 0;
	while (str[i])
		i++;
	if (!(res = malloc((i + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	while (str[i])
		res[i] = str[i];
	res[i] = 0;
	return (res);
}
