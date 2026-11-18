/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imlamaiz <imlamaiz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:06:51 by imlamaiz          #+#    #+#             */
/*   Updated: 2026/11/08 03:19:36 by imlamaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*p = (const unsigned char *)s;

	i = 0;
	while (i < n)
	{
		if ((char unsigned)c == p[i])
			return ((void *)p + i);
		i++;
	}
	return (NULL);
}
