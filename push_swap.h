/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youel-id <youel-id@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 02:33:27 by youel-id          #+#    #+#             */
/*   Updated: 2023/04/04 02:33:28 by youel-id         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include <fcntl.h>
#include<stdio.h>
#include <stdbool.h>
#include<limits.h>

typedef struct s_stack
{
	int top;
	int* items;
} t_stack;

int	ft_atoi(const char *str);
int is_digit( int i);
void	ft_putnbr(int n);
void check_if_valid(char *valid);
int ft_strlen(char *str);
static int	f_count( char *s, char c);
char	**ft_split(char  *s, char c);
static size_t	f_len( char *s, char c);
char	*ft_substr(char *s, unsigned int start, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(char  *s1, char  *s2);
void sort(t_stack *stack_a, t_stack *stack_b);
void push_b(t_stack *stack_a, t_stack *stack_b);
void push_a(t_stack *stack_a, t_stack *stack_b);
bool is_empty(t_stack *stack);
void my_swap_a(t_stack *stack_a);
void my_swap_b(t_stack *stack_b);
void rotate_a(t_stack *stack_a);
void rotate_b(t_stack *stack_b);
void rotate_ab(t_stack *stack_a,t_stack *stack_b);
void my_swap_ab(t_stack *stack_a, t_stack *stack_b);
void reverse_rotate_a(t_stack *stack_a);
void reverse_rotate_b(t_stack *stack_b);
void reverse_rotate_ab(t_stack *stack_a,t_stack *stack_b); 
void pushh(t_stack *stack);
void sort_tres(t_stack *stack_a);
void sort_deus(t_stack *stack_a);
void sort_cinco(t_stack *stack_a,t_stack *stack_b);
void sorting_cien(t_stack *stack_a,t_stack *stack_b);
int find_small(t_stack *stack_a);
int find_small_index(t_stack *stack_a);
int range_h(int stack_a,int start,int end);
int	max_h(t_stack *stackb);






#endif