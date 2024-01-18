/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:54:02 by ayarmaya          #+#    #+#             */
/*   Updated: 2024/01/18 04:39:27 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int	c;

	c = '7';
	if (ft_isdigit(c))
		printf("Le caractere est un chiffre\n");
	else
		printf("Le caractere n'est pas un chiffre\n");
	return (0);
}
*/
