/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:21:30 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:21:32 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*mass;
	size_t			i;

	i = 0;
	mass = (unsigned char *)arr;
	while (n != 0)
	{
		if (mass[i] == (unsigned char)c)
			return (&mass[i]);
		n--;
		i++;
	}
	return (NULL);
}
