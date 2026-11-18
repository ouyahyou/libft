/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imlamaiz <imlamaiz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 18:51:48 by imlamaiz          #+#    #+#             */
/*   Updated: 2026/11/09 03:57:16 by imlamaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lend;
	size_t	lens;
	size_t	i;
	size_t	lend2;

	lens = ft_strlen(src);
	if (size == 0)
		return (lens);
	lend = ft_strlen(dst);
	if (lend >= size)
		return (size + lens);
	i = 0;
	lend2 = lend;
	while (src[i] && lend < (size - 1))
	{
		dst[lend] = src[i];
		i++;
		lend++;
	}
	dst[lend] = '\0';
	return (lens + lend2);
}
