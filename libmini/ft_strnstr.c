/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:23:42 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:23:43 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char*needle, size_t len)
{
	size_t	i;
	size_t	io;
	size_t	nb;

	i = 0;
	io = 0;
	if (ft_strlen(needle) == 0 || haystack == needle)
		return ((char *)haystack);
	while (len > i && haystack[i] != '\0')
	{
		nb = 0;
		while (haystack[io] == needle[nb] && len > io)
		{
			io++;
			nb++;
			if (needle[nb] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
		io = i;
	}
	return (NULL);
}
