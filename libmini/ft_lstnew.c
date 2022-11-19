/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:21:15 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:21:16 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*mass;

	mass = (t_list *)malloc(sizeof (t_list));
	if (!mass)
		return (NULL);
	mass->content = content;
	mass->next = NULL;
	return (mass);
}
