/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:22:00 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:22:02 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *stc, size_t len)
{
	unsigned char	*van;
	unsigned char	*too;

	van = (unsigned char *)dst;
	too = (unsigned char *)stc;
	if (!dst && !stc)
		return (NULL);
	if (van > too)
	{
		while (len--)
			van[len] = too[len];
	}
	else
		van = ft_memcpy(dst, stc, len);
	return (van);
}
