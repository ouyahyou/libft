/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouyahyou <ouyahyou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 00:29:23 by imlamaiz          #+#    #+#             */
/*   Updated: 2026/11/09 22:15:33 by ouyahyou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (i == 0 || ((s[i - 1] == c) && (s[i] != c)))
			count++;
		i++;
	}
	return (count);
}

static void	ft_free(char **p, int j)
{
	while (j > 0)
	{
		j--;
		free(p[j]);
	}
	free(p);
}

static size_t	ft_len_word(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**ft_fill(char **p, char const *s, char c)
{
	size_t	len;
	size_t	k;
	size_t	j;

	j = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		len = ft_len_word(s, c);
		if (*s)
		{
			len = ft_len_word(s, c);
			p[j] = malloc((len + 1) * sizeof(char));
			if (!p[j])
				return (ft_free(p, j), NULL);
			k = 0;
			while (k < len)
				p[j][k++] = *s++;
			p[j++][k] = '\0';
		}
	}
	p[j] = NULL;
	return (p);
}
