/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 02:33:39 by youel-id          #+#    #+#             */
/*   Updated: 2023/04/04 02:33:40 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int is_digit( int i)
{
	if (i >= 48  && i <= 57)
		return(1);
	else
		return (0);
}
void	ft_putnbr(int n)
{
	char digit;

	if (n >= 10)
		ft_putnbr(n / 10);
	digit = (n % 10) + '0';
	write(1, &digit, 1);
}
int	ft_atoi( const char *str)
{
	int				i;
	int				res;
	int				n;
	unsigned char	*tmpstr;

	tmpstr = ((unsigned char *)str);
	i = 0;
	n = 1;
	res = 0;
	while (tmpstr[i] == '\n' || tmpstr[i] == '\t' || tmpstr[i] == '\r'
		|| tmpstr[i] == '\v' || tmpstr[i] == '\f' || tmpstr[i] == ' ')
		i++;
	if (tmpstr[i] == '-' || tmpstr[i] == '+')
	{
		if (tmpstr[i] == '-')
			n = -1;
		i++;
	}
	while ((tmpstr[i] >= '0' && tmpstr[i] <= '9'))
	{
		res = res * 10 + (tmpstr[i] - 48);
		i++;
	}
	return ((res * n));
}
int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return(i);

}