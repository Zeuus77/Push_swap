/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:21:08 by youel-id          #+#    #+#             */
/*   Updated: 2023/04/23 22:21:09 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<unistd.h>
#include<stdlib.h>
#include"push_swap.h"
#include<stdio.h>
//void check_if_valid(char  *valid)
//{
//	int i;
//	i = 0;
//	while(valid[i])
//	{
//		if(!(valid[i] >= '0' && valid[i] <= '9'))
//		{
//			write(1,"erreur",6);
//			exit(1);
//		}
//		i++;
//	}
//	if(valid[0] == '\0')
//	{
//		write(1,"Erreur:Empty",12);
//		exit(1);
//	}
//}

int* parse_argv(int ac, char **av, int* len)
{
	int i;
	i = 1;
	int j;
	j = 0;
	int x;
	char **string;
	int *num;
	char *join;
	if (ac > 1)
	{
		join = ft_strjoin(av[1]," ");
		while(i + 1 < ac)
		{
			join = ft_strjoin(join,av[i + 1]);
			i++;
		}
		string = ft_split(join,' ');
	}
	//else
	//	string = ft_split(av[1],' ');
	int arr_len = 0;
	while (string[arr_len])
		arr_len++;
	num = malloc(sizeof(int) * arr_len);
	x = 1;
	while(string[j])
	{
		num[j] = ft_atoi(string[arr_len - x]);
		j++;
		x++;
	}
	*len = arr_len;
	return num;
}
//void sort_big(t_stack* a, t_stack* b)
//{

//}

void print_stack(t_stack* stack)
{
	for (int i = 0; i <= stack->top; i++)
		printf("%i\n", stack->items[stack->top - i]);
	
}

int main(int ac, char **av) 
{
	if (ac < 1)
		return 0;
	int arr_len = 0;
	t_stack* a = malloc(sizeof(t_stack));
	a->items = parse_argv(ac, av, &arr_len);
	//a->items = parse_argv(ac, av, &arr_len);
	//a->top = arr_len ;
	a->top = ac - 2;
	t_stack* b = malloc(sizeof(t_stack));
	b->items = malloc(sizeof(int) * a->top);
	b->top = -1;
	//sort_tres(a);
	//sort_dos(a);
	//sort_cinco(a,b);
	//reverse_rotate_a(a);
	sorting_cien(a,b);
	print_stack(a);
	//push_a(a,b);
	//printf("%d\n", b->items[b->top]);
	//printf("9alwa %d\n", a->items[a->top]);
	//printf("%d\n", a->top);
	
	//print_stack(b);
	return 0;
}