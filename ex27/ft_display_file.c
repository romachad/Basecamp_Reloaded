/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 08:26:56 by romachad          #+#    #+#             */
/*   Updated: 2022/05/27 06:15:19 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str);
int		ft_check_error(int argc);

void	ft_read_file(int fd)
{
	char	file[50000];

	read(fd, file, 50000);
	ft_putstr(file);
}

int	main(int argc, char *argv[])
{
	int	error;
	int	fd;

	error = ft_check_error(argc);
	if (error == -1)
		return (0);
	else
	{
		fd = open(argv[1], 0);
		if (fd == -1)
			return (0);
		else
		{
			ft_read_file(fd);
			fd = close(fd);
		}
	}
	return (0);
}
