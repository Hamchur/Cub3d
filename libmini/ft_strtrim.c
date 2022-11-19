/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:23:57 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:23:58 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_rav(const char *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s, const char *set)
{
	char	*mass;
	int		i;
	int		nb;
	int		go;

	if (!s || !set)
		return (NULL);
	nb = ft_strlen(s);
	i = 0;
	while (ft_rav(set, s[i]))
		i++;
	while (ft_rav(set, s[nb - 1]) && nb > i)
		nb--;
	go = 0;
	mass = (char *) malloc((nb - i) * sizeof(char) + 1);
	if (mass == NULL)
		return (NULL);
	while (i < nb)
		mass[go++] = s[i++];
	mass[go] = '\0';
	return (mass);
}
