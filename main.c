/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 15:20:17 by blee              #+#    #+#             */
/*   Updated: 2017/10/23 18:34:37 by blee             ###   ########.fr       */
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
	int		x = 0;
	int		y = 2;
	int		z = 3;
	int		a = 4;
	int		b = 5;
	char	**str_arr;
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
	str_arr = (char **)malloc(sizeof(char **) * 5);
	str_arr[0] = ft_strdup("zzz");
	str_arr[1] = ft_strdup("bbb");
	str_arr[2] = ft_strdup("aaa");
	str_arr[3] = ft_strdup("ccc");
	str_arr[4] = ft_strdup("abc");
	ft_quicksort((void(**)) str_arr, 0, 4,
			(int (*)(const void *, const void *))&ft_strcmp);
	while (x < 5)
	{
		ft_putstr(str_arr[x]);
		x++;
	}
	return (0);
}
