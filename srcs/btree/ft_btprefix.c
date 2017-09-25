/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btprefix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 12:58:57 by blee              #+#    #+#             */
/*   Updated: 2017/09/24 13:18:02 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btprefix(b_tree *root, void (*func)(b_tree*))
{
	if (root)
	{
		func(root);
		ft_btprefix(root->left, func);
		ft_btprefix(root->right, func);
	}
}
