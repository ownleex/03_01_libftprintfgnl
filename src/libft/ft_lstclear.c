/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:53:04 by ayarmaya          #+#    #+#             */
/*   Updated: 2024/01/18 04:39:53 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_tmp;

	while (*lst)
	{
		next_tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next_tmp;
	}
	*lst = NULL;
}

/*
void	del_function(void *content)
{
	free(content);
	printf("Contenu libéré.\n");
}

int	main()
{
	t_list *element = (t_list *)malloc(sizeof(t_list));
	if (!element)
		return (0);
	element->content = malloc(sizeof(int));
	if (!element->content)
	{
		free(element);
		return (0);
	}
	*(int *)element->content = 42;
	printf("Contenu avant suppression : %d\n", *(int *)element->content);
	ft_lstdelone(element, del_function);
	return (0);
}
*/
