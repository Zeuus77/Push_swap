/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:10:00 by youel-id          #+#    #+#             */
/*   Updated: 2023/04/09 02:10:01 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include"push_swap.h"
void	*ft_calloc(size_t count, size_t size)
{
	char	*res;

	res = malloc(count * size);
	if (!res)
	{
		return (NULL);
	}
	ft_bzero(res, count * size);
	return (res);
}
void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*b;

	b = (char *)s;
	i = 0;
	while (i < n)
	{
		b[i] = '\0';
		i++;
	}
}
char	*ft_substr(char  *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str = (char *)ft_calloc(1, sizeof(char));
		return (str);
	}
	if (len >= ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] && i < len + start)
	{
		str[j++] = s[i++];
	}
	str[j] = '\0';
	return (str);
}
char	*ft_strjoin(char  *s1, char  *s2)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	if(!s1)
	{
		s1 = malloc(1);
		s1[0]= '\0';
	}
	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 2);
	if (!res)
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j])
		res[i++] = s2[j++];
	//free(s1);
	res[i] = ' ';
	res[i + 1] = '\0';
	return (res);
}