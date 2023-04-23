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

int* create_sorted_copy(t_stack* stack)
{
	int i = 0;
	int j = 0;
	int* ret = malloc(sizeof(int) * stack->top);
	while (i < stack->top + 1)
	{
		ret[i] = stack->items[i];
		i++;
	}
	i = 0;
	while (j < stack->top + 1)
	{
		while (i < stack->top + 1)
		{
			if (i + 1 < stack->top + 1 && ret[i] > ret[i + 1])
			{
				int tmp = ret[i];
				ret[i] = ret[i + 1];
				ret[i + 1] = tmp;
			}
			i++;
		}
		i = 0;
		j++;
	}
	return ret;
}

int get_index_of(int *arr, int size, int k)
{
	int i = 0;
	while (i < size)
	{
		if (arr[i] == k)
			return i;
		i++;
	}
	return -1;
}

int ra_or_rra(t_stack *stack_b, int k)
{
	int middle = (stack_b->top) / 2;
	int elem_idx = get_index_of(stack_b->items, stack_b->top +1, k);
	if (elem_idx > middle)
		return 1;
	return 0;
}


void move_elem_to_top_b(t_stack* stack_b, int k)
{
	if (ra_or_rra(stack_b, k))
	{
		while (stack_b->items[stack_b->top ] != k)
		{
			rotate_b(stack_b);
		}
	}
	else
	{
		while (stack_b->items[stack_b->top ] != k)
		{
			reverse_rotate_b(stack_b);
		}
	}
}

void move_elems_to_b(t_stack* a, t_stack* b)
{
	while (b->top != -1)
	{
		move_elem_to_top_b(b, max_h(b));
		push_a(a, b);
	}
}


void sorting_cien(t_stack *stack_a,t_stack *stack_b)
{
	int fn;
	int start;
	int end;
	start = 0;
	end = 15;
	int* sorted_arr = create_sorted_copy(stack_a);
	int stack_size = stack_a->top;
	while (stack_a->top)
	{
		int elem_idx = get_index_of(sorted_arr, stack_size, stack_a->items[stack_a->top]);
		if (elem_idx >= start && elem_idx <= end)
		{
			push_b(stack_a, stack_b);
			start++;
			end++;
		}
		else if(elem_idx < start)
		{
			push_b(stack_a, stack_b);
			rotate_b(stack_b);
			start++;
			end++;
		}
		else if (elem_idx > end)
			rotate_a(stack_a);
	}
	move_elems_to_b(stack_a, stack_b);
}
