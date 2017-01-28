/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 15:39:59 by slogos            #+#    #+#             */
/*   Updated: 2016/10/06 01:19:31 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	if (s && f)
	{
		i = 0;
		len = ft_strlen(s);
		if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
			return (0);
		while (i < len)
		{
			str[i] = f(i, s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
