/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 01:32:25 by slogos            #+#    #+#             */
/*   Updated: 2016/10/06 20:50:04 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (s)
	{
		i = 0;
		if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		while (start--)
			s++;
		while (i < len && s[i] != '\0')
		{
			str[i] = s[i];
			i++;
		}
		str[len] = '\0';
		return (str);
	}
	return (NULL);
}
