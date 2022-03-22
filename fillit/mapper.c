/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:56:51 by egaliber          #+#    #+#             */
/*   Updated: 2022/03/22 20:35:21 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	count_map_size(int n)
{
	int	mapsize;

	mapsize = 2;
	while (mapsize * mapsize < n)
	{
		mapsize++;
	}
	return (mapsize);
}

char	**create_new_map(int mapsize)
{
	char	**map;
	int		i;

	i = 0;
	map = (char **)malloc(sizeof(char *) * mapsize);
	while (i < mapsize)
	{
		map[i] = ft_strnew(mapsize);
		ft_memset(map[i], '.', mapsize);
		i++;
	}
	return (map);
}

size_t	piece_counter(t_item *piecelist)
{
	size_t	counter;

	counter = 0;
	while (piecelist)
	{
			piecelist = piecelist -> next;
			counter++;
	}
	return (counter);
}

void	printer(char **map, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putstr(map[i]);
		ft_putchar('\n');
		i++;
	}
}

void	free_map(char **map, int mapsize)
{
	int	i;

	i = 0;
	while (i < mapsize)
	{
		free(map[i]);
		i++;
	}
	free(map);
}
