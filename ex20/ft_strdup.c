/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 06:00:38 by romachad          #+#    #+#             */
/*   Updated: 2022/05/22 08:34:06 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		size;
	int		i;

	size = ft_strlen(src);
	new_str = malloc(size * sizeof(char));
	i = 0;
	while (src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = src[i];
	return (new_str);
}
