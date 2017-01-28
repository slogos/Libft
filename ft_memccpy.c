/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 22:42:11 by slogos            #+#    #+#             */
/*   Updated: 2016/10/06 01:35:48 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memccpy(void *dst, const void *src,
							int c, size_t n)
{
	size_t				i;
	char				*s;
	char				*d;

	i = 0;
	s = (char*)src;
	d = (char*)dst;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == c)
			return (&d[i + 1]);
		i++;
	}
	return (0);
}
