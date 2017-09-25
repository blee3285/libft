/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 15:20:17 by blee              #+#    #+#             */
/*   Updated: 2017/09/24 18:17:54 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	bt_cmp(b_tree *tree1, b_tree *tree2)
{
	int		*temp1;
	int		*temp2;

	temp1 = tree1->data;
	temp2 = tree2->data;
	return (*temp1 - *temp2);
}

void	bt_putnum(b_tree *tree)
{
	int		*temp;

	temp = tree->data;
	ft_putnbr(*temp);
}

void	bt_addnum(b_tree *tree)
{
	int		*temp;

	temp = tree->data;
	*temp += 1;
	tree->data = temp;
}

int	main(void)
{
	b_tree	*test;
	int		x = 1;
	int		y = 2;
	int		z = 3;

	test = ft_btnew(&y, sizeof(y));
	ft_btadd(&test, ft_btnew(&x, sizeof(x)), bt_cmp);
	ft_btadd(&test, ft_btnew(&z, sizeof(z)), bt_cmp);
	ft_btinfix(test, bt_putnum);
	ft_btinfix(test, bt_addnum);
	ft_putchar('\n');
	ft_btinfix(test, bt_putnum);
	return (0);
}
