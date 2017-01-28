/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 12:55:15 by slogos            #+#    #+#             */
/*   Updated: 2016/09/23 12:55:17 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int l1;
	int l2;

	l1 = ft_strlen(big);
	l2 = ft_strlen(little);
	if (!l2)
		return (char *)big;
	while (l1 >= l2)
	{
		l1--;
		if (!ft_memcmp(big, little, l2))
			return (char *)big;
		big++;
	}
	return (0);
}
