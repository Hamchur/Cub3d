/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:22:05 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:22:07 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *mass, int a, size_t b)
{
	int				i;
	unsigned char	*muss;

	muss = (unsigned char *)mass;
	i = 0;
	while (b != 0)
	{
		muss[i] = a;
		b--;
		i++;
	}
	return (mass);
}
