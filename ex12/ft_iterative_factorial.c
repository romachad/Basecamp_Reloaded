/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 05:15:49 by romachad          #+#    #+#             */
/*   Updated: 2022/05/26 04:15:29 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0 || nb > 14)
		return (0);
	result = nb;
	while (nb > 1)
	{
		nb--;
		result = result * nb;
	}
	return (result);
}
