/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_mini_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamchur <hamchur@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:15:50 by hamchur           #+#    #+#             */
/*   Updated: 2022/09/15 17:15:50 by hamchur          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3d.h"

void	print(t_data *info, int start_x, int start_y, int color)
{
	int	x;
	int	y;

	y = start_y;
	while (y < start_y + info->zoom)
	{
		x = start_x;
		while (x < start_x + info->zoom)
		{
			info->window[y][x] = color;
			x++;
		}
		y++;
	}
}

void	print_mini_map(t_data *data)
{
	int	y;
	int	x;

	data->zoom = WINHEIGHT / 110;
	y = -1;
	while (data->map[++y] != NULL)
	{
		x = 0;
		while (data->map[y][x] != '\0')
		{
			if (data->map[y][x] == '1')
			{
				print(data, x * data->zoom + (WINWIDTH / 100),
					y * data->zoom + (WINHEIGHT / 100), 0xFFFFFF);
			}
			x++;
		}
	}
	print(data, data->posx * data->zoom + (WINWIDTH / 100),
		data->posy * data->zoom + (WINHEIGHT / 100), 0x00FF00);
}
