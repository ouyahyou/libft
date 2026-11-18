/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouyahyou <ouyahyou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 17:54:48 by imlamaiz          #+#    #+#             */
/*   Updated: 2026/11/09 21:14:17 by ouyahyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new_p;

	new_p = *lst;
	if (!*lst || !del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		new_p = (*lst)->next;
		free(*lst);
		*lst = new_p;
	}
}
