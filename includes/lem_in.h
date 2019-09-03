/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlandema <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 16:28:22 by tlandema          #+#    #+#             */
/*   Updated: 2019/09/03 18:57:08 by brichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include "../libft/includes/libft.h"
# include <stdint.h>
# include <limits.h>
# include <stdlib.h>
# define FAILURE	-1
# define SUCCESS	0
# define TRUE		1
# define FALSE		0
# define LEFT		'l'
# define RIGHT		'r'

typedef struct		s_nod
{
	char			*room;
	struct s_link	*links;
	struct s_nod	*right;
	struct s_nod	*left;
	uint64_t		height;
	uint64_t		mark;
}					t_nod;

typedef struct		s_link
{
	char			*name;
	t_nod			*linked_room;
	struct s_link	*parent;
	struct s_link	*right;
	struct s_link	*left;
}					t_link;

typedef struct		s_path
{
	size_t			size;
	t_nod			*node;
	struct s_path	*next;
}					t_path;

typedef struct		s_env
{
	t_nod			***paths;
	t_nod			*start;
	t_nod			*end;
	t_nod			*tree;
	int64_t			ants;
}					t_env;

uint8_t				ft_get_ants(t_env *env);

/*
void				ft_print_tree(t_nod *tree); // TO TEJ
void				ft_aff_paths(t_nod ***the_paths); // TO TEJ
int					ft_get_rooms_and_links(t_env *env, char *str, int r_l);
int					ft_get_path(t_env *env);
int					ft_get_multi_paths(t_env *env);
int					ft_node_in_path(t_path *path, int i);

int					ft_create_path(t_path **path, t_nod *new);

int					ft_node_add(t_env *env, t_nod **tree, char *room, char s_e);
t_nod				*ft_node_new(char *room);

int					ft_link_add(t_link *parent, t_link **l_tree,\
					char *name, t_nod *r_tree);

int					ft_path_counter(t_path **paths);
void				ft_hei_to_num(t_nod *tree, int i);
int					ft_calc_dist(t_env *env);
int					ft_count_links(t_link *count, int n_hei);
int					ft_get_next_node(t_path *path, t_nod **node, t_env *env);
t_path				**ft_check_paths(t_path **old_paths, t_env *env, int num);
t_nod				***ft_transform_paths(t_path **paths, t_env *env);

int					ft_ant_in_paths(t_nod ***paths, int ants, int i);
int					ft_send_ants(t_nod ***paths, int *tab_i, int n_path,\
	   				int ant_name);
void				ft_aff_one_move(int ant, char *path);

t_nod				*ft_search_room(t_nod *tree, char *key);
t_link				*ft_search_link(t_link *tree, char *key);

void				ft_balance_tree(t_nod **tree, char *room);
void				ft_small_balance(t_nod **tree, int bal);

t_nod				**ft_free_ret_nod(t_nod **to_f);
void				ft_free_tree(t_nod *tree);
void				ft_free_transformed_path(t_nod ***paths);
void				ft_free_path(t_path **path, int j);
int					ft_free_paths_nodes(t_path **paths, t_nod **nodes);
int					ft_free_str(char *str);
int					ft_ret_i_del_links(t_nod **links, int i);

int					ft_stock_room(t_env *env, char *str, char *s_e);
int					ft_stock_link(t_env *env, char *str);

int					ft_print_error(char *str);

*/
#endif
