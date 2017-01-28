/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 21:44:41 by slogos            #+#    #+#             */
/*   Updated: 2016/10/06 01:30:32 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(*str) * size);
	if (str == NULL)
		return (0);
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return ((void *)str);
}
