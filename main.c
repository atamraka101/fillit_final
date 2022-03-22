/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 12:51:24 by egaliber          #+#    #+#             */
/*   Updated: 2022/03/22 19:03:04 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_item	*piecelist;

	if (argc != 2)
	{
		ft_putstr("usage: ./fillit source_file\n");
		return (0);
	}
	piecelist = parser(argv[1]);
	if (!piecelist)
	{
		ft_putstr("error\n");
		system ("leaks a");
		return (1);
	}

	solver(piecelist);

	if (piecelist)
		free_tet_list(piecelist);
	system ("leaks a");
	return(0);
}
