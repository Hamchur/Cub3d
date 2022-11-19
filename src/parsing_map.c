/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:15:00 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:15:01 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/cub3d.h"

void	parsing_map(t_cub *cub, char *line)
{
	int		i;
	char	**mass;

	i = 0;
	if (cub->data->map != NULL)
	{
		while (cub->data->map[i])
			i++;
		mass = (char **)malloc(sizeof(char *) * (i + 2));
		if (!mass)
			its_error("Error malloc map");
		mass[i + 1] = NULL;
		mass[i] = ft_strdup(line);
		if (!mass[i])
			its_error("Error malloc map");
		while (i-- > 0)
			mass[i] = cub->data->map[i];
		free(cub->data->map);
		cub->data->map = mass;
		return ;
	}
	cub->data->map = (char **)malloc(sizeof(char *) * 2);
	cub->data->map[0] = ft_strdup(line);
	cub->data->map[1] = NULL;
}
