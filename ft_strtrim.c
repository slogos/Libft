/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 04:29:35 by slogos            #+#    #+#             */
/*   Updated: 2016/10/06 01:25:07 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_is_white(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		len;
	char	*str;

	if (!s)
		return (0);
	i = 0;
	j = 0;
	len = ft_strlen(s);
	while ((i < len) && my_is_white(s[i]))
		i++;
	if (i >= len)
		return (ft_strnew(0));
	len--;
	while (my_is_white(s[len]))
		len--;
	len++;
	if (!(str = ft_strnew(len - i)))
		return (0);
	while (i < len)
	{
		str[j++] = s[i++];
	}
	return (str);
}
