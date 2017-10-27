/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 16:21:11 by blee              #+#    #+#             */
/*   Updated: 2017/10/27 15:45:31 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTREE_H
# define BTREE_H

typedef struct		s_tree
{
	void			*data;
	size_t			content_size;
	struct s_tree	*left;
	struct s_tree	*right;
}					t_btree;

int					ft_btadd(t_btree **root, t_btree *new,
					int (*cmpf)(t_btree*, t_btree*));
t_btree				*ft_btnew(void *data, size_t (size));
void				ft_btinfix(t_btree *root, void (*func)(t_btree*));
void				ft_btprefix(t_btree *root, void (*func)(t_btree*));
void				ft_btsuffix(t_btree *root, void (*func)(t_btree*));
void				ft_btdel(t_btree **tree);

#endif
