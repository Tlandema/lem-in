/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_functions2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlandema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 20:16:56 by tlandema          #+#    #+#             */
/*   Updated: 2019/07/25 22:22:47 by tlandema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int	ft_ret_i_del_links(t_nod **links, int i)
{
	ft_memdel((void **)&links);
	return (i);
}

int	ft_free_paths_nodes(t_path **paths, t_nod **nodes)
{
	ft_free_path(paths);
	ft_memdel((void **)&nodes);
	return (1);
}
