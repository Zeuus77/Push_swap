/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 05:55:26 by youel-id          #+#    #+#             */
/*   Updated: 2023/04/19 05:55:27 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
int range_h(int stack_a,int start,int end)
{
	int *l;
	int i;
	i = start;
	while(i <= end)
	{
		if(stack_a < l[start])
			return(2);
		if( stack_a == l[i])
			return(1);
		i++;
	}
	return(0);

}
void push_t(t_stack *stack_a, t_stack *stack_b)
{
	int m;
	while(stack_b->top != -1)
	{
		m = max_h(stack_b);
		while(m != stack_b->top)
		{
			if(m > stack_b->top / 2)
				rotate_b(stack_b);
			if(m <= stack_b->top / 2)
				reverse_rotate_b(stack_b);
			m = max_h(stack_b);
		}
		if(m == stack_b->top)
			push_a(stack_a,stack_b);
	}
}
void sorting_cien(t_stack *stack_a,t_stack *stack_b)
{
	int fn;
	int start;
	int end;
	start = 0;
	end = 15;
	while(stack_a->top != 1)
	{
		fn = range_h(stack_a->items[stack_a->top],start,end);
		if(fn == 1)
		{
			push_b(stack_a,stack_b);
			start++;
			end++;
		}
		if (fn == 0)
			rotate_a(stack_a);
		if (fn == 2)
		{
			push_b(stack_a,stack_b);
			rotate_b(stack_b);
			start++;
			end++;
		}
	}
	push_t(stack_a,stack_b);
}
