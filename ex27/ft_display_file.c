/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nistanoj <nistanoj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:20:53 by nistanoj          #+#    #+#             */
/*   Updated: 2025/04/25 14:23:50 by nistanoj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_display_file(int fd)
{
	static char	buffer[1024];
	int			rd;

	rd = read(fd, buffer, 1024);
	if (rd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return ;
	}
	while (rd > 0)
	{
		write(1, buffer, rd);
		rd = read(fd, buffer, 1024);
		if (rd == -1)
		{
			ft_putstr("Cannot read file.\n");
			return ;
		}
	}
}

int	main(int ac, char **av)
{
	int		fd;

	if (ac < 2)
	{
		ft_putstr("File name missing.\n");
		return (0);
	}
	if (ac > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Cannot read file.\n");
		return (0);
	}
	ft_display_file(fd);
	close (fd);
	return (0);
}
