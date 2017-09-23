/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/22 16:31:34 by blee              #+#    #+#             */
/*   Updated: 2017/09/22 18:26:41 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

b_tree		ft_btnew(void *data, size_t size)
{
	b_tree		*new;

	new = (b_tree*)malloc(sizeof(b_tree));
	if (!new)
		return (NULL);
	if (!data)
	{
		new->data = NULL;
		new_content_size = 0;
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
