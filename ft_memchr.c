/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 14:57:55 by slogos            #+#    #+#             */
/*   Updated: 2016/10/06 21:00:17 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char*)s;
	while (n > 0 && *str != (unsigned char)c)
	{
		n--;
		str++;
	}
	if (n == 0)
		return (NULL);
	else
		return (str);
}
