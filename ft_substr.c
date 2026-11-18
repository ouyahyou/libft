/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imlamaiz <imlamaiz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 10:31:43 by imlamaiz          #+#    #+#             */
/*   Updated: 2026/11/07 21:55:31 by imlamaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	n;
	char	*p;

	i = start;
	n = 0;
	if (!s)
		return (NULL);
	if (i >= ft_strlen(s))
	{
		p = malloc(1 * sizeof(char));
		if (!p)
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (s[i] && n < len)
		p[n++] = s[i++];
	p[n] = '\0';
	return (p);
}
