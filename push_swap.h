/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:29:06 by akasaman          #+#    #+#             */
/*   Updated: 2022/07/24 02:14:16 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# include "Libft/libft.h"
# include <stdio.h>
// # include "ft_printf/ft_printf.h"
// # include "get_next_line/get_next_line.h"

void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_a, t_list **stack_b);

// typedef struct s_list
// {
// 	int				*content;
// 	struct t_list	*next;
	
// }	t_list;


#endif