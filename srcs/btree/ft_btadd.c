/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btadd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 18:45:26 by blee              #+#    #+#             */
/*   Updated: 2017/10/23 16:32:33 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_btadd(t_btree **root, t_btree *new,
		int (*cmpf)(t_btree*, t_btree*))
{
	if (*root == NULL)
		*root = new;
	else if (cmpf(new, *root) < 0)
		ft_btadd(&((*root)->left), new, cmpf);
	else
		ft_btadd(&((*root)->right), new, cmpf);
	return (0);
}
