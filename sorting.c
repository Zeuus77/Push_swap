/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 02:25:09 by youel-id          #+#    #+#             */
/*   Updated: 2023/04/19 02:25:10 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
void sort_tres(t_stack *stack_a)
{
	if (stack_a->items[stack_a->top] > stack_a->items[stack_a->top - 1] &&  stack_a->items[stack_a->top] > stack_a->items[stack_a->top - 2] &&stack_a->items[stack_a->top -1] > stack_a->items[stack_a->top - 2])
	{
		rotate_a(stack_a);
		my_swap_a(stack_a);
	}
	else if(stack_a->items[stack_a->top] > stack_a->items[stack_a->top - 1] && stack_a->items[stack_a->top] < stack_a->items[stack_a->top - 2] && stack_a->items[stack_a->top - 1] < stack_a->items[stack_a->top - 2])
		my_swap_a(stack_a);
	else if(stack_a->items[stack_a->top] < stack_a->items[stack_a->top - 1] && stack_a->items[stack_a->top] > stack_a->items[stack_a->top - 2] && stack_a->items[stack_a->top - 1] > stack_a->items[stack_a->top - 2] )
		reverse_rotate_a(stack_a);
	else if(stack_a->items[stack_a->top] > stack_a->items[stack_a->top - 1] && stack_a->items[stack_a->top] > stack_a->items[stack_a->top - 2] && stack_a->items[stack_a->top - 1] < stack_a->items[stack_a->top -2])
	{
		reverse_rotate_a(stack_a);
		reverse_rotate_a(stack_a);
	}
	else if(stack_a->items[stack_a->top] < stack_a->items[stack_a->top - 1] && stack_a->items[stack_a->top] < stack_a->items[stack_a->top - 2] && stack_a->items[stack_a->top - 1] > stack_a->items[stack_a->top - 2])
	{
		reverse_rotate_a(stack_a);
		my_swap_a(stack_a);
	}
}
void sort_dos(t_stack *stack_a)
{
	if(stack_a->items[stack_a->top] > stack_a->items[stack_a->top - 1])
	{
		my_swap_a(stack_a);
	}
}
void sort_cinco(t_stack *stack_a,t_stack *stack_b)
{
	int index;
	int i;
	i = 0;
	while( stack_a->top > 2 )
	{
		index = find_small_index(stack_a);
		if(index == stack_a->top)
			push_b(stack_a, stack_b);
		else if(index > stack_a->top - index)
			rotate_a(stack_a);
		else if(index <= stack_a->top - index)
			reverse_rotate_a(stack_a);
	}
	sort_tres(stack_a);
	push_a(stack_a,stack_b);
	push_a(stack_a,stack_b);
}

