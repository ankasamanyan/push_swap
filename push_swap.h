/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akasaman <akasaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:29:06 by akasaman          #+#    #+#             */
/*   Updated: 2022/08/04 15:57:09 by akasaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "Libft/libft.h"
# include <stdio.h>

typedef struct s_vars
{
	t_list *head_a;
	t_list *head_b;
	int		argc;
	char	**array;
}	t_vars;

/* Input checks */
int		check_input(int argc, char **argv, t_vars *vars);
void	find_max_bits(void *content);
void	fill_stack_a(int argc, char **argv, t_vars *vars);
void 	print_content(void *content);
void	put_in_array(int argc, char **argv, t_vars *vars);
void	print_2d_array(char	**arr, int fd);
/* Operations */
void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);
void	rotate_a(t_list **stack_a);
/*  */

#endif