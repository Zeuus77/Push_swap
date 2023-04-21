/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 04:01:17 by youel-id          #+#    #+#             */
/*   Updated: 2023/04/19 04:01:19 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
int find_small(t_stack *stack_a)
{
	int number;
	int i;
	i = 0;
	number = stack_a->items[i];
	//printf("number in stack: %d\n", number);
	while(i < stack_a->top )
	{
		if(stack_a->items[i] > stack_a->items[i + 1])
			number = stack_a->items[i + 1];
		i++;
		//printf("number %d in stack: %d\n",i, number);
	}
	return(number);
}
//int find_small_index(t_stack *stack_a)
//{
//	int number;
//	int i;
//	i = 0;
//	number = stack_a->items[i];
//	while(i < stack_a->top )
//	{
//		if(stack_a->items[i] > stack_a->items[i + 1])
//			number = i;
//		i++;
//	}
//	return(number);
//}
int	find_small_index(t_stack *stack_a)
{
	int	i;
	int	min;
	int	number;

	i = 0;
	number = 0;
	min = INT_MAX;
	while (i <= stack_a->top)
	{
		if (stack_a->items[i] < min)
		{
			min = stack_a->items[i];
			number = i;
		}
		i++;
	}
	return (number);
}
int	max_h(t_stack *stack_b)
{
	int	i;
	int	m;

	i = 0;
	m = 0;
	while (i <= stack_b->top)
	{
		if (stack_b->items[i] > stack_b->items[m])
			m= i;
		i++;
	}
	return (m);
}