/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rule1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 05:01:01 by youel-id          #+#    #+#             */
/*   Updated: 2023/04/17 05:01:03 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

#include"push_swap.h"

void reverse_rotate_a(t_stack* stack_a) 
{
    int bot;
    int i;
    i = 0;

    if (stack_a->top < 1) 
    {
        printf("Error");
        exit(1);
    } 
    else 
    {
        bot = stack_a->items[0];
        while (i < stack_a->top) 
        {
            stack_a->items[i] = stack_a->items[i + 1];
            i++;
        }
        stack_a->items[stack_a->top] = bot;
        printf("rra\n");
    }
}

void reverse_rotate_b(t_stack* stack_b) 
{
    int bot;
    int i;
    i = 0;

    if (stack_b->top < 1) 
    {
        printf("Error");
        exit(1);
    } 
    else 
    {
        bot = stack_b->items[0];
        while (i < stack_b->top) 
        {
            stack_b->items[i] = stack_b->items[i + 1];
            i++;
        }
        stack_b->items[stack_b->top] = bot;
        printf("rrb\n");
    }
}
void reverse_rotate_ab(t_stack *stack_a , t_stack* stack_b) 
{
	reverse_rotate_a(stack_a);
	reverse_rotate_b(stack_b);
	printf("rrr");
}

void rotate_a(t_stack *stack_a)
{
    int top;
    int i;
    i = stack_a->top;
    if( stack_a->top < 1)
    {
        printf("error");
        exit(1);
    }
    else
    {
        top = stack_a->items[stack_a->top];
        while(i > 0 )
        {
            stack_a->items[i] = stack_a->items[i - 1];
            i--;
        }
        stack_a->items[0] = top;
        printf("ra\n");
    }
}
void rotate_b(t_stack *stack_b)
{
    int top;
    int i;
    i = stack_b->top;
    if( stack_b->top < 1)
    {
        printf("error");
        exit(1);
    }
    else
    {
        top = stack_b->items[stack_b->top];
        while(i > 0 )
        {
            stack_b->items[i] = stack_b->items[i - 1];
            i--;
        }
        stack_b->items[0] = top;
        printf("rb\n");
    }
}