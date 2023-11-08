/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:19:33 by myerrou           #+#    #+#             */
/*   Updated: 2023/09/24 16:43:21 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*s;

	i = 0;
	s = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if (char_is_printable(str[i]) == 1)
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar(s[(unsigned char)str[i] / 16]);
			ft_putchar(s[(unsigned char)str[i] % 16]);
		}
	i++;
	}
}
