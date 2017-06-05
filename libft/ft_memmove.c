/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 19:22:50 by aleveque          #+#    #+#             */
/*   Updated: 2016/12/02 13:26:51 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned int	i;

	i = 0;
	s1 = (unsigned char*)src;
	s2 = (unsigned char*)dest;
	if (src > dest)
	{
		while (i < n)
		{
			s2[i] = s1[i];
			i++;
		}
	}
	else if (src < dest)
	{
		while (i < n)
		{
			s2[n - 1] = s1[n - 1];
			n--;
		}
	}
	return (dest);
}
