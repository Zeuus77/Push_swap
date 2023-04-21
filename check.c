/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:12:01 by youel-id          #+#    #+#             */
/*   Updated: 2023/04/09 02:12:05 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
void check_if_valid(char  *valid)
{
	int i;
	i = 0;
	while(valid[i])
	{
		if(!(valid[i] >= '0' && valid[i] <= '9'))
		{
			write(1,"erreur",6);
			exit(1);
		}
		i++;
	}
	if(valid[0] == '\0')
	{
		write(1,"Erreur:Empty",12);
		exit(1);
	}
}
