/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:21:25 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:21:26 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dast, const void *cat, int c, size_t n)
{
	unsigned char	*van;
	unsigned char	*too;
	size_t			i;

	van = (unsigned char *)dast;
	too = (unsigned char *)cat;
	i = 0;
	if (!van && !too)
		return (NULL);
	while (n--)
	{
		van[i] = too[i];
		if (too[i] == (unsigned char)c)
			return (dast + i +1);
		i++;
	}
	return (NULL);
}
