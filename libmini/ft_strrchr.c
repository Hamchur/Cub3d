/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:23:47 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:23:48 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*mass;
	int		nb;

	nb = ft_strlen(s);
	mass = (char *)s;
	if ((char)c == '\0')
		return (&mass[nb]);
	while (nb--)
	{
		if (mass[nb] == (char)c)
			return (&mass[nb]);
	}
	return (NULL);
}
