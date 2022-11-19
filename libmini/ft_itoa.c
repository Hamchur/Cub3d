/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:19:27 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:19:28 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_size(int i)
{
	int		nb;

	nb = 0;
	if (i <= 0)
		nb++;
	while (i != 0)
	{
		nb++;
		i = i / 10;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	char	*mass;
	long	i;
	size_t	nb;

	i = n;
	nb = ft_size(n);
	mass = (char *) malloc((nb + 1) * sizeof (char));
	if (mass == NULL)
		return (NULL);
	mass[nb] = '\0';
	if (i < 0)
	{
		mass[0] = '-';
		i = i * (-1);
	}
	if (i == 0)
		mass[0] = 48;
	while (i > 0)
	{
		nb--;
		mass[nb] = (i % 10) + 48;
		i = i / 10;
	}
	return (mass);
}
