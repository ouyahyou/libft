/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouyahyou <ouyahyou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:32:08 by imlamaiz          #+#    #+#             */
/*   Updated: 2026/11/09 21:35:20 by ouyahyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*p;
	unsigned char		*d;

	i = 0;
	d = (unsigned char *)dst;
	p = (const unsigned char *)src;
	while (i < n)
	{
		d[i] = p[i];
		i++;
	}
	return ((void *)d);
}
