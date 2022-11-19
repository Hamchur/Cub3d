/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:23:33 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:23:34 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char ))
{
	char	*mass;
	size_t	i;
	size_t	nb;

	if (!s)
		return (NULL);
	i = 0;
	nb = ft_strlen(s);
	mass = (char *)malloc(nb * sizeof (char) + 1);
	if (mass == NULL)
		return (NULL);
	while (nb != 0)
	{
		mass[i] = f(i, s[i]);
		i++;
		nb--;
	}
	mass[i] = '\0';
	return (mass);
}
