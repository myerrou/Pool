/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 21:56:53 by myerrou           #+#    #+#             */
/*   Updated: 2023/10/03 10:25:45 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*moh;
	int		i;

	i = 0;
	moh = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (moh == NULL)
		return (NULL);
	while (*src)
		moh[i++] = *src++;
	moh[i] = '\0';
	return (moh);
}
/*
int main(int ac, char **av)
{
	char *me;
	char *him;

	if (ac == 2)
	{
	me = ft_strdup(av[1]);
	him = strdup(av[1]);
	printf("*%s*\n*%s*\n", me, him);
	}
}
*/
