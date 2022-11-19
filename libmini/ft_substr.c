/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:24:02 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:24:03 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*mass;
	size_t	i;
	size_t	nb;

	i = 0;
	if (!s)
		return (NULL);
	nb = ft_strlen(s);
	if (start >= nb)
		return (ft_strdup(""));
	if (len > nb)
		len = nb;
	mass = (char *)malloc((len + 1) * sizeof (char));
	if (mass == NULL)
		return (NULL);
	while (len--)
	{
		mass[i] = s[start];
		i++;
		start++;
	}
	mass[i] = '\0';
	return (mass);
}
