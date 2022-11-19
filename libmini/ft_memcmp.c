/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:21:36 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:21:37 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *arr, const void *arr2, size_t n)
{
	unsigned char	*van;
	unsigned char	*too;
	size_t			i;

	van = (unsigned char *)arr;
	too = (unsigned char *)arr2;
	i = 0;
	while (n != 0)
	{
		if (van[i] > too[i])
			return (van[i] - too[i]);
		if (van[i] < too[i])
			return (van[i] - too[i]);
		i++;
		n--;
	}
	return (0);
}
