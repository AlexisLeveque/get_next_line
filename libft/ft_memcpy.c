/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:38:12 by aleveque          #+#    #+#             */
/*   Updated: 2016/12/02 13:25:00 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dst, void const *src, size_t n)
{
	unsigned char *str;
	unsigned char *s;

	s = (unsigned char*)src;
	str = (unsigned char*)dst;
	while (n--)
		str[n] = s[n];
	return (str);
}
