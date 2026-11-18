/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouyahyou <ouyahyou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 22:20:40 by imlamaiz          #+#    #+#             */
/*   Updated: 2026/11/09 21:18:21 by ouyahyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;

	if (!del || !f || !lst)
		return (NULL);
	head = malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	while (lst)
	{
		head->content = malloc(sizeof(void *));
		f(head->content);
		if (!head->content)
		{
			del(head->content);
			ft_lstclear(&lst, del);
			return (NULL);
		}
		head->next = malloc(sizeof(t_list));
		if (head->next)
			return (NULL);
		lst = lst->next;
		head = lst;
	}
	return (head);
}
