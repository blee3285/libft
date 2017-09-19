/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blee <blee@student.42.us.org>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 19:47:58 by blee              #+#    #+#             */
/*   Updated: 2017/09/18 17:19:41 by blee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		main(void)
{
	char	*line;
	int		fd;
	int		ret;

	fd = open("Makefile", O_RDONLY);	
	line = NULL;
	while ((ret = get_next_line(fd, &line)))
		ft_printf("|%s|\n", line);
	close(fd);

	return (0);
}
