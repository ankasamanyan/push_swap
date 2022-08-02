/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:29:06 by akasaman          #+#    #+#             */
/*   Updated: 2022/08/02 09:48:53 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# include "Libft/libft.h"
# include <stdio.h>

typedef struct s_vars
{
	t_list *head_a;
	t_list *head_b;
	int		argc;
}	t_vars;

void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);
void	rotate_a(t_list **stack_a);
int		check_input(int argc, char **argv, t_vars *vars);
void 	print_content(void *content);
void		find_max(void *content);



// typedef struct s_list
// {
// 	int				*content;
// 	struct t_list	*next;
	
// }	t_list;


#endif