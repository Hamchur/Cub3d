/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:23:10 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:23:11 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t nb)
{
	size_t	i;
	size_t	van;
	size_t	too;

	i = 0;
	van = ft_strlen(dst);
	too = ft_strlen(src);
	if (nb <= van || !nb)
		return (nb + too);
	while (src[i] != '\0' && (i + van) < nb - 1)
	{
		dst[van + i] = src[i];
		i++;
	}
	dst[van + i] = '\0';
	return (van + too);
}
