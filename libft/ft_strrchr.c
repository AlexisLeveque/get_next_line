/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:48:17 by aleveque          #+#    #+#             */
/*   Updated: 2016/12/02 13:18:21 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(char *s, int c)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (s[i])
	{
		if (s[i] == c)
			y = i;
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	if (y == 0 && s[0] != c)
		return (NULL);
	else
		return (&s[y]);
}
