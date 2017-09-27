/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btdel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 15:04:06 by blee              #+#    #+#             */
/*   Updated: 2017/09/26 18:52:40 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		no_child(b_tree **tree)
{
	b_tree		*root;

	root = *tree;
	free(root->data);
	free(root);
	root = NULL;
}

static void		one_child(b_tree **tree)
{
	b_tree		*root;
	b_tree		*temp;

	root = *tree;
	if (root->left)
		temp = root->left;
	else
		temp = root->right;
	free(root->data);
	free(root);
	root = temp;
}

static void		two_child(b_tree **tree)
{
	b_tree		*root;
	b_tree		*temp;

	root = *tree;
	temp = root->right;
	while (temp->left)
		temp = temp->left;
	free(root->data);
	root->data = temp->data;
	free(temp);
}

void			ft_btdel(b_tree **tree)
{
	b_tree		*root;

	root = *tree;
	if (root)
	{
		if ((root->left) && (root->right))
			two_child(tree);
		else if ((root->left) || (root->right))
			one_child(tree);
		else
			no_child(tree);
	}
}

