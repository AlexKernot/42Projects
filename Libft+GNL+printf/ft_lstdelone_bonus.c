/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akernot <akernot@student.42.ft>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:34:11 by akernot           #+#    #+#             */
/*   Updated: 2023/03/13 11:34:11 by akernot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"
/*
static void delete(void *data)
{
	int	i = 0;
	char *pointer;

	pointer = (char *)data;
	while (pointer[i] != 0)
	{
		pointer[i] = 0;
		i++;
	}
	printf("We are here \n");
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*
int	main(void)
{
	t_list *l = ft_lstnew(malloc(10));
	ft_lstdelone(l, delete);
}*/