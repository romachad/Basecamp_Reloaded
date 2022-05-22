/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romachad <romachad@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 01:27:13 by romachad          #+#    #+#             */
/*   Updated: 2022/05/22 05:41:22 by romachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_name(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] != s2 [i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(int argc, char *argv[])
{
	char	*swap;
	int		i;
	int		flag;

	flag = 0;
	while (flag == 0)
	{
		flag = 1;
		i = 1;
		while (i < (argc - 1))
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				swap = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = swap;
				flag = 0;
			}
			i++;
		}
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc == 1)
		return (0);
	else if (argc == 2)
	{
		ft_print_name(argv[1]);
		return (0);
	}
	ft_sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		ft_print_name(argv[i]);
		i++;
	}
}
