/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 19:50:27 by mspasic           #+#    #+#             */
/*   Updated: 2024/04/15 20:37:22 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sort_list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int temp;
	t_list *copy = lst;

	while (lst->next != NULL && ((*cmp)(lst->data, lst->next->data) == 0))
	{
		lst = lst->next;
		if (lst->next == NULL)
			return (copy);
	}
	while (lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data) != 0)
			lst = lst->next;
		else
		{
			temp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = temp;
		}
	}
	return (sort_list (copy, cmp));
}

