/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/21 21:20:33 by slogos            #+#    #+#             */
/*   Updated: 2016/09/21 22:40:00 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned	char	*d;
	unsigned const char *s;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;
	while (n != '\0')
	{
		*d++ = *s++;
		n--;
	}
	return (dst);
}
