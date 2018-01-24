/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schaaban <schaaban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 19:01:48 by schaaban          #+#    #+#             */
/*   Updated: 2018/01/24 13:19:03 by schaaban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;

	if (argc != 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	int rem;
	char	*line;
	while ((rem = get_next_line(fd, &line)) > 0)
	{
		ft_printf("Line : |%s|, Rem : %d\n", line, rem);
		ft_freef("1", (void**)&line);
	}
	close(fd);
	ft_printf("Last rem : %d\n", rem);
	return (0);
}