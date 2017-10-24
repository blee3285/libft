/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btinfix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 12:54:10 by blee              #+#    #+#             */
/*   Updated: 2017/10/23 16:35:34 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btinfix(t_btree *root, void (*func)(t_btree*))
{
	if (root)
	{
		ft_btinfix(root->left, func);
		func(root);
		ft_btinfix(root->right, func);
	}
}
