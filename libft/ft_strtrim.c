/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:09:05 by aleveque          #+#    #+#             */
/*   Updated: 2016/12/02 13:19:17 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

static char	*trimation(char const *s, int i, int y, int x)
{
	char *ret;

	if (!(ret = (char*)malloc(sizeof(char))))
		return (NULL);
	*ret = '\0';
	if (!(s))
		return (ret);
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
		i++;
	if (!(s[i]))
		return (ret);
	while (s[y])
		y++;
	while (s[y] == '\0' || s[y] == ' ' || s[y] == '\t' || s[y] == '\n')
		y--;
	ft_memdel((void**)&ret);
	if (!(ret = (char*)malloc(sizeof(char) * y - i + 2)))
		return (NULL);
	while (i++ <= y)
		ret[x++] = s[i - 1];
	ret[x] = '\0';
	return (ret);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		y;
	int		x;

	x = 0;
	i = 0;
	y = 0;
	return (trimation(s, i, y, x));
}
