/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:22:42 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:22:43 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*mass;
	int		i;
	int		nb;

	mass = (char *)s;
	nb = ft_strlen(mass);
	if ((char)c == '\0')
		return (&mass[nb]);
	i = 0;
	while (mass[i] != '\0')
	{
		if (mass[i] == (char)c)
			return (mass + i);
		i++;
	}
	return (NULL);
}
