/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ut.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabasset <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:01:18 by mabasset          #+#    #+#             */
/*   Updated: 2021/12/12 21:01:22 by mabasset         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

char	*ft_strcpy(char *dest, char src[])
{
	int	i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

void	change1(int *len, char *str)
{
	*len -= 3;
	str += 3;
}

void	change2(int *len, char *str)
{
	str += *len % 3;
	*len -= *len % 3;
}
