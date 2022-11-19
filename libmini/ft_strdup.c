/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:22:59 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:23:00 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*mass;

	mass = (char *) malloc(ft_strlen(s1) * sizeof (char) + 1);
	if (mass == NULL)
		return (NULL);
	ft_memcpy(mass, s1, ft_strlen(s1));
	mass[ft_strlen(s1)] = '\0';
	return (mass);
}
