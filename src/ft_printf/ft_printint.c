/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:15:52 by ayarmaya          #+#    #+#             */
/*   Updated: 2024/01/18 04:45:05 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_printf.h"

int	ft_printint(int nbr)
{
	int		ret;
	char	*str;

	str = ft_itoa(nbr);
	ret = ft_printstr(str);
	free(str);
	return (ret);
}
