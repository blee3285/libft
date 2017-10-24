/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btprefix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 12:58:57 by blee              #+#    #+#             */
/*   Updated: 2017/10/23 16:34:44 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btprefix(t_btree *root, void (*func)(t_btree*))
{
	if (root)
	{
		func(root);
		ft_btprefix(root->left, func);
		ft_btprefix(root->right, func);
	}
}
