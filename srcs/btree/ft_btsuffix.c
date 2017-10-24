/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btsuffix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 13:02:45 by blee              #+#    #+#             */
/*   Updated: 2017/10/23 16:36:34 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btsuffix(t_btree *root, void (*func)(t_btree*))
{
	if (root)
	{
		ft_btsuffix(root->left, func);
		ft_btsuffix(root->right, func);
		func(root);
	}
}
