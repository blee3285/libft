/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 14:19:01 by blee              #+#    #+#             */
/*   Updated: 2017/10/23 16:41:52 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_swap_arr(void **array, int x, int y)
{
	void	*temp;

	temp = array[x];
	array[x] = array[y];
	array[y] = temp;
}

static int	partition(void **array, int low, int high,
		int (*cmp)(const void *, const void *))
{
	int	i;
	int	pivot;

	i = low;
	pivot = low;
	while (i < high)
	{
		if (cmp(array[i], array[high]) <= 0)
		{
			ft_swap_arr(array, i, pivot);
			pivot++;
		}
		i++;
	}
	ft_swap_arr(array, pivot, high);
	return (pivot);
}

void		ft_quicksort(void **array, int low, int high,
		int (*cmp)(const void *, const void *))
{
	int	i;

	if (low < high)
	{
		i = partition(array, low, high, cmp);
		ft_quicksort(array, low, (i - 1), cmp);
		ft_quicksort(array, (i + 1), high, cmp);
	}
}
