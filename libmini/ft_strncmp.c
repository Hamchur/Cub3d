/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:23:38 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:23:39 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*van;
	unsigned char	*too;
	size_t			i;

	van = (unsigned char *)s1;
	too = (unsigned char *)s2;
	i = 0;
	while (n != 0)
	{
		if (van[i] == '\0' && too[i] == '\0')
			return (0);
		if (van[i] > too[i])
			return (van[i] - too[i]);
		if (van[i] < too[i])
			return (van[i] - too[i]);
		i++;
		n--;
	}
	return (0);
}
