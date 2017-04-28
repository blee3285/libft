/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelnode.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/27 18:40:24 by blee              #+#    #+#             */
/*   Updated: 2017/04/27 18:45:03 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel_node(t_list **lst, t_lst *node)
{
	t_list	*temp;
	t_list	*next_node;

	temp = *lst;
	next_node = node->next;
	if (temp == node)
		*lst = next_node;
	else
	{
		while (temp->next != node)
			temp = temp->next;
		temp->next = next_node;
	}
	free(node->content);
	free(node);
}
