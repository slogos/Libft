/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 02:11:58 by slogos            #+#    #+#             */
/*   Updated: 2016/10/06 01:21:41 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	char			*str;

	if (s1 && s2)
	{
		i = 0;
		if (!(str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + \
					ft_strlen(s2) + 1))))
			return (0);
		while (i <= ft_strlen(s1))
		{
			str[i] = s1[i];
			i++;
		}
		i = 0;
		while (i <= ft_strlen(s2))
		{
			str[i + ft_strlen(s1)] = s2[i];
			i++;
		}
		str[i + ft_strlen(s1)] = '\0';
		return (str);
	}
	return (0);
}
