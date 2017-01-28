/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 13:15:13 by slogos            #+#    #+#             */
/*   Updated: 2016/10/06 20:52:50 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			n;

	if (*little == '\0')
		return ((char *)big);
	while (*big && len)
	{
		if (*big == *little)
		{
			s1 = (unsigned char *)big;
			s2 = (unsigned char *)little;
			n = len;
			while (*s1 == *s2 && *s2 != '\0' && n--)
			{
				s1++;
				s2++;
			}
			if (*s2 == '\0')
				return (char *)big;
		}
		len--;
		big++;
	}
	return (NULL);
}
