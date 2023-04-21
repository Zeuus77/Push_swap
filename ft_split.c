/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:10:18 by youel-id          #+#    #+#             */
/*   Updated: 2023/04/09 02:10:21 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"push_swap.h"
static int	f_count(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static size_t	f_len(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char *s, char c)
{
	char	**str;
	int		i;
	int		k;

	i = 0;
	k = 0;
	while (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (f_count(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != '\0')
		{
			str[k] = ft_substr(s + i, 0, f_len(s + i, c));
			k++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	str[k] = NULL;
	return (str);
}