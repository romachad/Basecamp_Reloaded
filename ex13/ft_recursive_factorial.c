/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 05:27:46 by romachad          #+#    #+#             */
/*   Updated: 2022/05/26 04:25:21 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	recursive(int nb)
{
	if (nb > 1)
		nb = nb * recursive(nb - 1);
	return (nb);
}

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	result = recursive(nb);
	return (result);
}
