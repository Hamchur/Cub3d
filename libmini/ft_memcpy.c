/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:21:42 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:21:44 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *last, const void *mass, size_t n)
{
	size_t	i;

	i = 0;
	if (!mass && !last)
		return (last);
	while (n != 0)
	{
		((char *)last)[i] = ((char *)mass)[i];
		i++;
		n--;
	}
	return (last);
}
