/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:04:13 by aleveque          #+#    #+#             */
/*   Updated: 2016/12/02 13:18:36 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

static int	ft_skip(char const *s, char c, int index)
{
	while (s[index] == c && s[index])
	{
		index++;
	}
	return (index);
}

static int	ft_sizeword(char const *s, char c, int i)
{
	int count;

	count = 1;
	while (s[i] != c && s[i])
	{
		count++;
		i++;
	}
	return (count);
}

static int	ft_countword(char const *s, char c, int *y, int *x)
{
	int i;
	int count;

	*y = 0;
	*x = 0;
	if (!(s))
		return (0);
	count = 3;
	i = 0;
	i = ft_skip(s, c, i);
	while (s[i])
	{
		if (s[i] == c)
		{
			count++;
			i = ft_skip(s, c, i);
		}
		i++;
	}
	return (count);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tb;
	int		i;
	int		y;
	int		x;

	if (!(s))
		return (NULL);
	if (!(tb = (char**)malloc(sizeof(char*) * ft_countword(s, c, &y, &i))))
		return (NULL);
	while (s[i])
	{
		x = 0;
		i = ft_skip(s, c, i);
		if (s[i] == '\0' && y == 0)
			return (tb);
		if (!(tb[y] = (char*)malloc(sizeof(char) * (ft_sizeword(s, c, i) + 1))))
			return (NULL);
		while (s[i] != c && s[i])
			tb[y][x++] = s[i++];
		tb[y++][x] = '\0';
	}
	if (y > 1)
		tb[y - 1] = NULL;
	tb[y] = NULL;
	return (tb);
}
