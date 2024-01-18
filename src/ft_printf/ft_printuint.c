/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:16:24 by ayarmaya          #+#    #+#             */
/*   Updated: 2024/01/18 04:45:18 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

static void	ft_putuint(unsigned int nbr)
{
	if (nbr >= 10)
	{
		ft_putuint(nbr / 10);
		ft_putuint(nbr % 10);
	}
	else
		ft_putchar_fd(nbr + '0', 1);
}

int	ft_printuint(unsigned int nbr)
{
	int	len;

	len = 1;
	ft_putuint(nbr);
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}
