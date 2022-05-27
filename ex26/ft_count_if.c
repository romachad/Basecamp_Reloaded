/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 06:03:00 by romachad          #+#    #+#             */
/*   Updated: 2022/05/27 03:35:34 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			result++;
		i++;
	}
	return (result);
}
