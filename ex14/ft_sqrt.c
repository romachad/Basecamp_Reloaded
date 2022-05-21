/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 05:49:41 by romachad          #+#    #+#             */
/*   Updated: 2022/05/21 06:25:42 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	number;

	if (nb <= 0 || (nb >= 2 && nb <= 3))
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 2147395600)
		return (0);
	number = 2;
	while (number <= 46340)
	{
		if ((number * number) == nb)
			return (number);
		number++;
	}
	return (0);
}
