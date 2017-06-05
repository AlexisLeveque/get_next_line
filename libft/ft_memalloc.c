/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 17:36:24 by aleveque          #+#    #+#             */
/*   Updated: 2016/12/02 13:23:35 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*m;
	unsigned int	i;

	i = 0;
	m = (unsigned char*)malloc(size);
	if (!m)
		return (NULL);
	while (i < size)
	{
		m[i] = 0;
		i++;
	}
	return (m);
}
