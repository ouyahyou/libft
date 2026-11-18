/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imlamaiz <imlamaiz@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 22:47:53 by imlamaiz          #+#    #+#             */
/*   Updated: 2026/11/08 00:41:37 by imlamaiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lene(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start])
	{
		if (!ft_strchr(set, s1[start]))
			break ;
		start++;
	}
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*p;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (end > ft_lene(s1, set))
	{
		if (!ft_strchr(set, s1[end - 1]))
			break ;
		end--;
	}
	p = malloc(((end - ft_lene(s1, set)) + 1) * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while ((ft_lene(s1, set) + i) < end)
	{
		p[i] = s1[ft_lene(s1, set) + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
