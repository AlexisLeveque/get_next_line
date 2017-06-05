/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 18:12:42 by aleveque          #+#    #+#             */
/*   Updated: 2016/12/02 13:26:43 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s2;
	unsigned char	*s1;
	unsigned char	cc;
	unsigned int	i;

	i = 0;
	cc = (unsigned char)c;
	s1 = (unsigned char*)src;
	s2 = (unsigned char*)dst;
	while (i < n && s1[i] != cc)
	{
		s2[i] = s1[i];
		i++;
	}
	if (s1[i] == cc)
	{
		s2[i] = s1[i];
		return (&s2[i + 1]);
	}
	else
		return (NULL);
}
