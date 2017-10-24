/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 15:20:17 by blee              #+#    #+#             */
/*   Updated: 2017/10/23 18:10:47 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	bt_cmp(t_btree *tree1, t_btree *tree2)
{
	int		*temp1;
	int		*temp2;

	temp1 = tree1->data;
	temp2 = tree2->data;
	return (*temp1 - *temp2);
}

void	bt_putnum(t_btree *tree)
{
	int		*temp;
	temp = tree->data;
	ft_putnbr(*temp);
}

void	bt_addnum(t_btree *tree)
{
	int		*temp;

	temp = tree->data;
	*temp += 1;
	tree->data = temp;
}

int		arr_cmp(int a, int b)
{
	return (a - b);
}

void	print_arr(int *array, size_t size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(array[i]);
		i++;
	}
}

int	main(void)
{
	t_btree	*test;
	t_btree	*temp;
	int		x = 1;
	int		y = 2;
	int		z = 3;
	int		a = 4;
	int		b = 5;
	int		array[] = {5,4,3,2,1};
/*
	test = ft_btnew(&y, sizeof(y));
	ft_btadd(&test, ft_btnew(&x, sizeof(x)), bt_cmp);
	ft_btadd(&test, ft_btnew(&z, sizeof(z)), bt_cmp);
	ft_btadd(&test, ft_btnew(&a, sizeof(a)), bt_cmp);
	ft_btadd(&test, ft_btnew(&b, sizeof(b)), bt_cmp);
	temp = test->right;
	ft_btinfix(test, bt_putnum);
	ft_putchar('\n');
	ft_btdel(&temp);
	ft_btinfix(test, bt_putnum);
	ft_putchar('\n');
*/
	print_arr(array, 5);
	ft_putchar('\n');
	//ft_quicksort(&array, 0, 4, &arr_cmp);
	//print_arr(array, 5);
	return (0);
}
