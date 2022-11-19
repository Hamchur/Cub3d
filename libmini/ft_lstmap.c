/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:21:10 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:21:11 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*mass;

	if (!lst)
		return (NULL);
	mass = ft_lstnew(f(lst->content));
	if (mass == NULL)
	{
		ft_lstclear(&mass, del);
		return (NULL);
	}
	if (lst->next != NULL)
		mass->next = ft_lstmap(lst->next, f, del);
	return (mass);
}
