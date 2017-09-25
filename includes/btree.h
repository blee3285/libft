/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 16:21:11 by blee              #+#    #+#             */
/*   Updated: 2017/09/24 16:47:45 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BTREE_H
# define BTREE_H

typedef struct		s_tree
{
	void			*data;
	size_t			content_size;
	struct s_tree	*left;
	struct s_tree	*right;
}					b_tree;

int					ft_btadd(b_tree **root, b_tree *new, 
						int (*cmpf)(b_tree*, b_tree*));
b_tree				*ft_btnew(void *data, size_t (size));
void				ft_btinfix(b_tree *root, void (*func)(b_tree*));
void				ft_btprefix(b_tree *root, void (*func)(b_tree*));
void				ft_btsuffix(b_tree *root, void (*func)(b_tree*));

#endif
