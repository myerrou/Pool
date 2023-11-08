/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:09:56 by myerrou           #+#    #+#             */
/*   Updated: 2023/09/28 18:23:22 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			break ;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(int ac, char **av)
{
	char	*temp;
	int		i;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			temp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = temp;
			i = 0;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	ft_sort(ac, av);
	while (i < ac)
		ft_putstr(av[i++]);
	return (0);
}
