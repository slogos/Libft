/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 12:26:20 by slogos            #+#    #+#             */
/*   Updated: 2016/09/23 12:26:21 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	const	char *sc;

	sc = s + ft_strlen(s);
	if (!c)
		return (char *)sc;
	while (sc > s)
	{
		--sc;
		if (*sc == c)
			return (char *)sc;
	}
	return (0);
}
