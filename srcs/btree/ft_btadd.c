/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btadd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 18:45:26 by blee              #+#    #+#             */
/*   Updated: 2017/09/22 18:54:08 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_btadd(b_tree **root, b_tree *new, int (*cmpf)(b_tree*, b_tree*))
{
	if (*root == NULL)
		*root = new;
	else if (cmpf(new, *root) < 0)
		ft_btadd(&((*root)->left), new, cmpf);
	else
		ft_btadd(&((*root)->right), new, cmpf);
	return (0);
}
