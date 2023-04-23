/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 03:02:43 by youel-id          #+#    #+#             */
/*   Updated: 2023/03/30 03:02:45 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
#include"push_swap.h"
#include<stdio.h>


int	is_sorted(t_stack *a)
{
	int	i;

	if (a->top <= 0)
		return (1);
	i = 0;
	while (i < a->top)
	{
		if (a->items[i] < a->items[i + 1])
			return (0);
		i++;
	}
	return (1);
}
int	ft_min(t_stack *a)
{
	int	i;
	int	min;
	int	k;

	i = 0;
	k = 0;
	min = 2147483647;
	while (i <= a->top)
	{
		if (a->items[i] < min)
		{
			min = a->items[i];
			k = i;
		}
		i++;
	}
	return (k);
}

void	sort_3(t_stack *a, t_stack *b)
{
	int	mini;

	mini = ft_min(a);
	if (is_sorted(a) == 1 && b->top == -1)
		exit(1);
	while (is_sorted(a) == 0 && a->top <= 2)
	{
		if (mini == a->top - 2 && a->items[a->top] > a->items[a->top - 1])
		{
			my_swap_a(a);
			reverse_rotate_a(a);
		}
		else if (mini == a->top - 1 && a->items[a->top] > a->items[a->top - 2])
			rotate_a(a);
		else if (mini == a->top - 1)
			my_swap_a(a);
		else if (a->top == mini && a->items[a->top - 1] > a->items[a->top - 2])
		{
			my_swap_a(a);
			rotate_a(a);
		}
		else if (a->top - 2 == mini && a->items[a->top] < a->items[a->top - 1])
			reverse_rotate_a(a);
	}
}

void add_stack(char **string, int len, t_stack *a)
{
	int i = 0;
	while(i < len)
	{
		a->items[i] = ft_atoi(string[i]);
		i++;
	}
	a->top = i - 1;
}

char	*split_args(char *argv[], int argc)
{
	int		i;
	char	*res;

	if (!argv || argc < 2)
		return (NULL);
	i = 1;
	while (argv[i] && argc > 1)
	{
		res = ft_strjoin(res, argv[i]);
		i++;
		argc--;
	}
	return (res);
}

int	size_arr(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i - 1);
}

void print_stack(t_stack* stack)
{
	for (int i = 0; i < stack->top; i++)
		printf("%i\n", stack->items[stack->top - i]);
	
}

int main(int ac, char **av) 
{
	if(ac > 1)
	{
		t_stack a;
		t_stack b;
		char **arg;
		char *str = split_args(av, ac);
		arg = ft_split(str, ' ');
		int len = size_arr(arg);
		a.items = malloc(sizeof(int) * len);
		b.items = malloc(sizeof(int) * len);
		b.top = -1;
		a.top = len;
		while(len)
		{
			a.items[len] = ft_atoi(arg[len]);
			len--;
		}
		//sort_3(&a, &b);

		printf("%d top \n", a.top);
		print_stack(&a);
		//printf("index 0 value %d\n", a.items[0]); 
		//printf("index 1 value %d\n", a.items[1]);
		//printf("index 2 value %d\n", a.items[2]); 

		




	}

}