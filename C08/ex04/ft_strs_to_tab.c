/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchemlal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:14:13 by mchemlal          #+#    #+#             */
/*   Updated: 2023/10/04 15:14:39 by mchemlal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*s;

	s = (char *)malloc(ft_strlen(str) + 1);
	if (!s)
		return (0);
	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*t;
	int				i;

	t = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!t)
		return (0);
	i = 0;
	while (i < ac)
	{
		t[i].size = ft_strlen(av[i]);
		t[i].str = av[i];
		t[i].copy = ft_strdup(av[i]);
		i++;
	}
	t[i].size = 0;
	t[i].str = 0;
	t[i].copy = 0;
	return (t);
}
