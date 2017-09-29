/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btdel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 15:04:06 by blee              #+#    #+#             */
/*   Updated: 2017/09/28 18:20:29 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_btdel(b_tree **tree)
{
	b_tree	*root;

	root = *tree;
	if (root)
	{
		free(root->data);
		free(root);
		root->content_size = 0;
		root = NULL;
	}
}
