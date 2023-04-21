/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 02:18:10 by youel-id          #+#    #+#             */
/*   Updated: 2023/04/09 02:18:12 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void push_b(t_stack *stack_a , t_stack *stack_b)
{

    if (stack_a->top >= 0)
    {
        stack_b->items[stack_b->top + 1] = stack_a->items[stack_a->top];
        stack_a->top--;
        stack_b->top++;
    }
    printf("pb\n");
}

void push_a(t_stack *stack_a, t_stack *stack_b)
{
    if (stack_a->top >= 0)
    {
        stack_a->items[stack_a->top + 1] = stack_b->items[stack_b->top];
        stack_b->top--;
        stack_a->top++;
    }
    printf("pa\n");
}

void my_swap_a(t_stack *stack_a) 
{
	int temp;
    if (stack_a->top < 1) 
	{
        printf("Error");
        exit(1);
    } 
	else 
	{
     	temp = stack_a->items[stack_a->top];
        stack_a->items[stack_a->top] = stack_a->items[stack_a->top - 1];
        stack_a->items[stack_a->top - 1] = temp;
    }
    	printf("sa\n");
}
void my_swap_b(t_stack *stack_b) 
{
	int temp;
    if (stack_b->top < 1) 
	{
        printf("Error");
        exit(1);
    } 
	else 
	{
     	temp = stack_b->items[stack_b->top];
        stack_b->items[stack_b->top] = stack_b->items[stack_b->top - 1];
        stack_b->items[stack_b->top - 1] = temp;
    }
    	printf("sb\n");
}
void my_swap_ab(t_stack *stack_a, t_stack *stack_b)
{
	my_swap_a(stack_a);
	my_swap_b(stack_b);
	printf("ss\n");
}


