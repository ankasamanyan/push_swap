/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:22:44 by akasaman          #+#    #+#             */
/*   Updated: 2022/07/23 20:06:55 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **stack_a, t_list **stack_b)
{
	t_list *head;

	if (ft_lstsize(*stack_b) > 0)
	{
		head = (*stack_b)->next;
		ft_lstadd_front(stack_a, *stack_b);
		*stack_b = head;
		write(1, "pa", 3);
	}
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list *head;

	if (ft_lstsize(*stack_a) > 0)
	{
		head = (*stack_a)->next;
		ft_lstadd_front(stack_b, *stack_a);
		*stack_a = head;
		write(1, "pb",3);
	}
}

// void	rotate_a(t_list **stack_a)
// {
// // 	Shift up all elements of stack a by 1.
// // 	The first element becomes the last one.

	
// }