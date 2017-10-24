/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 16:31:34 by blee              #+#    #+#             */
/*   Updated: 2017/10/23 16:36:10 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_btree		*ft_btnew(void *data, size_t size)
{
	t_btree		*new;

	new = (t_btree*)malloc(sizeof(t_btree));
	if (!new)
		return (NULL);
	if (!data)
	{
		new->data = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content_size = size;
		new->data = malloc(size);
		if (!(new->data))
		{
			free(new);
			return (NULL);
		}
		ft_memcpy(new->data, data, size);
	}
	new->left = NULL;
	new->right = NULL;
	return (new);
}
