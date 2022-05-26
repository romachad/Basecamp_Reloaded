/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 06:03:00 by romachad          #+#    #+#             */
/*   Updated: 2022/05/26 08:14:43 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i][0] != 0)
	{
		if (f(tab[i]) == 1)
			return (ft_len(tab[i]));
		i++;
	}
	return (0);
}
