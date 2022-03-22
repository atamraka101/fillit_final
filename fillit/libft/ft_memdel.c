/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egaliber <egaliber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 10:36:23 by atamraka          #+#    #+#             */
/*   Updated: 2022/03/17 14:41:10 by egaliber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** takes parameter the address of a memory area that needs to be freed
** using free(3), then puts the pointer to NULL
*/

#include "libft.h"

void	ft_memdel(void **ap)
{
	if (ap && *ap)
	{
		free (*ap);
		*ap = NULL;
	}
}
