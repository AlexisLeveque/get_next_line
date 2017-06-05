/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 11:18:40 by aleveque          #+#    #+#             */
/*   Updated: 2016/12/02 13:30:38 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static char	*ft_write(long n, int neg, char *s, int i)
{
	s[i] = '\0';
	i--;
	while (n > 9)
	{
		s[i] = (n % 10 + 48);
		n = (n / 10);
		i--;
	}
	if (n < 10)
	{
		s[i] = (n + 48);
		i--;
		if (neg == -1)
		{
			s[i] = '-';
		}
	}
	return (s);
}

char		*ft_itoa(int n)
{
	int		i;
	char	*s;
	long	nbr;
	int		neg;

	neg = 1;
	i = 1;
	nbr = n;
	while (nbr > 9 || nbr < -9)
	{
		nbr /= 10;
		i++;
	}
	nbr = n;
	if (n < 0)
	{
		i++;
		neg = -1;
		nbr = -nbr;
	}
	if (!(s = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	return (ft_write(nbr, neg, s, i));
}
