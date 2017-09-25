/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btsuffix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 13:02:45 by blee              #+#    #+#             */
/*   Updated: 2017/09/24 15:19:40 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btsuffix(b_tree *root, void (*func)(b_tree*))
{
	if (root)
	{
		ft_btsuffix(root->left, func);
		ft_btsuffix(root->right, func);
		func(root);
	}
}
