/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:55:05 by aleveque          #+#    #+#             */
/*   Updated: 2016/12/02 13:18:44 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strstr(char *big, char *little)
{
	int i;
	int x;

	i = 0;
	if (little[0] == '\0')
		return (big);
	while (big[i])
	{
		x = 0;
		if (big[i] == little[x])
		{
			while (little[x] == big[i + x] && little[x])
				x++;
			if (little[x] == '\0')
				return (&big[i]);
		}
		i++;
	}
	return (NULL);
}
