/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/27 15:53:43 by slogos            #+#    #+#             */
/*   Updated: 2016/10/06 01:32:25 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(*str) * (size + 1));
	if (str == NULL)
		return (0);
	while (i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
