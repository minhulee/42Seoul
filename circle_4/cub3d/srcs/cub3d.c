/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minhulee <minhulee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:50:05 by minhulee          #+#    #+#             */
/*   Updated: 2024/09/03 15:39:24 by minhulee         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/cub3d.h"

void	init_info(t_cub3d *info)
{
	int	i;

	info->mlx = mlx_init();
	if (!info->mlx)
		ft_err("init :: mlx obj create failed..");
	info->window = mlx_new_window(info->mlx, 64, 64, "title");
	if (!info->window)
		ft_err("init :: window obj create failed..");
	info->map_data.map = NULL;
	info->map_data.start = 0;
	info->map_data.width = 0;
	info->map_data.height = 0;
	i = 0;
	while (i < 3)
	{
		info->map_data.floor[i] = -1;
		info->map_data.ceil[i] = -1;
		i++;
	}
	i = -1;
	ft_memset(info->map_data.walls, 0, sizeof(int *) * 4);
}

int	main(int argc, char **argv)
{
	t_cub3d	info;

	if (argc != 2)
		ft_err("no argument or more than 2 arguments.");
	init_info(&info);
	parsing(&info, argv[1]);

}
