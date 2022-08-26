/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:29:06 by akasaman          #+#    #+#             */
/*   Updated: 2022/08/27 00:06:42 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "Libft/libft.h"
# include <stdio.h>

typedef struct s_vars
{
	t_list	*head_a;
	t_list	*head_b;
	int		argc;
	int		*array;
	int		*index;
}	t_vars;

/* Input checks */
int		check_input(int argc, char **argv);
void	check_valid(int argc, char **argv);
void	check_repeat(int argc, char **argv);
void	check_overflow(int argc, char **argv);
int		sign_handle(char **argv, int i, int j);
void	check_sort(int argc, char **argv);
/* Error message */
void	print_message(void);
/* Help functions */
void	print_content(void *content);
/* Operations */
void	rotate_a(t_list **stack_a);
void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);
void	swap_a(t_list **stack_a);
/* Input handle */
int		find_max_bits(t_vars vars);
void	just_index(t_vars *vars, t_list **stack);
void	put_in_array(int argc, char **argv, t_vars *vars);
void	fill_stack_a(int argc, char **argv, t_vars *vars);
/* Sorting */
void	just_sort(t_vars *vars);
void	raaadix_baby(t_vars *vars, t_list **stack_a, t_list **stack_b);
/* Free stuff */
void	free_stuffy(void *content);

#endif