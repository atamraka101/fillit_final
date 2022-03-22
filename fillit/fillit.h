/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 09:34:52 by atamraka          #+#    #+#             */
/*   Updated: 2022/03/22 20:44:12 by atamraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft/libft.h"
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>

# define MAX_FILE_SIZE 545
# define MIN_FILE_SIZE 19

typedef struct tetriminos_piece
{
	int						coordinates[8];
	char					letter;
	int						x_offset;
	int						y_offset;
	struct tetriminos_piece	*next;

}				t_item;

/*
** validator
*/

int			tetrimino_count(char *input);
int			count_adjacent_hashes(char *input);
int			validate_tetriminos_shape(char *input, int size);

/*
** solver
*/

void		solver(t_item *piecelist);
int			determine_map(char **map, t_item *piece, int mapsize);
int			inside(t_item *piece, int mapsize, char axis);
void		placing(t_item *piece, char **map, char letter);
int			overlap(char **map, t_item *piece);

/*
** shifters
*/

int			shift_coordinates_rc(int *coords, int r, int c);
int			align_coordinates_top_left(int *coords);

/*
** parser
*/

int			get_coordinates(char *input, int inSize, int *coords);
void		free_tet_list(t_item *list);
t_item		*new_t_item(char *input, int inSize, char letter);
t_item		*make_tet_list(char *input, int inSize);
t_item		*parser(char *filename);

/*
** mapper
*/

int			count_map_size(int n);
char		**create_new_map(int mapsize);
size_t		piece_counter(t_item *piecelist);
void		printer(char **map, int size);
void		free_map(char **map, int mapsize);

#endif
