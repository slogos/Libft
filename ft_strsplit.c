/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/04 20:56:53 by slogos            #+#    #+#             */
/*   Updated: 2016/10/06 21:38:05 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_n(const char *s, char c)
{
	int		cnt;
	int		in_substring;

	in_substring = 0;
	cnt = 0;
	while (*s != '\0')
	{
		if (in_substring == 1 && *s == c)
			in_substring = 0;
		if (in_substring == 0 && *s != c)
		{
			in_substring = 1;
			cnt++;
		}
		s++;
	}
	return (cnt);
}

static int		ft_wlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		nb_word;
	int		i;

	if (s)
	{
		i = 0;
		nb_word = ft_n((const char *)s, c);
		if (!(t = (char **)malloc(sizeof(*t) * (ft_n((const char *)s, c) + 1))))
			return (NULL);
		while (nb_word--)
		{
			while (*s == c && *s != '\0')
				s++;
			t[i] = ft_strsub((const char *)s, 0, \
					ft_wlen((const char *)s, c));
			if (t[i] == NULL)
				return (NULL);
			s = s + ft_wlen(s, c);
			i++;
		}
		t[i] = NULL;
		return (t);
	}
	return (0);
}
