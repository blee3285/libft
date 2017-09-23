/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 16:21:11 by blee              #+#    #+#             */
/*   Updated: 2017/09/22 16:23:43 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BTREE_H
# define BTREE_H

typedef struct		s_tree
{
	void			*data;
	size_t			content_size;
	struct b_tree	*left;
	struct b_tree	*right;
}					b_tree;


#endif
