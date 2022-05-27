/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 03:54:22 by romachad          #+#    #+#             */
/*   Updated: 2022/05/27 06:15:52 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_check_error(int argc)
{
	if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (-1);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (-1);
	}
	else
		return (0);
}
