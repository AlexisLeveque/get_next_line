/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 13:49:02 by aleveque          #+#    #+#             */
/*   Updated: 2016/12/02 13:24:37 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t		ft_strlcat(char *dst, char *src, size_t size)
{
	unsigned int i;
	unsigned int y;

	i = ft_strlen(dst);
	y = 0;
	if (i > size)
		return (size + ft_strlen(src));
	while (src[y] && (i + y + 1) < size)
	{
		dst[i + y] = src[y];
		y++;
	}
	dst[i + y] = '\0';
	return (i + ft_strlen(src));
}
