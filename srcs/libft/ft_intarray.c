/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intarray.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 19:18:47 by blee              #+#    #+#             */
/*   Updated: 2017/10/12 19:20:56 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_intarray(int size)
{
	int		*array;
	if (size <= 0)
		return (NULL);
	array = (int*)malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	ft_bzero(array, (size * 4));
	return (array);
}
