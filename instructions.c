/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:22:44 by akasaman          #+#    #+#             */
/*   Updated: 2022/08/27 00:16:01 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*head;

	if (ft_lstsize(*stack_b) > 0)
	{
		head = (*stack_b)->next;
		ft_lstadd_front(stack_a, *stack_b);
		*stack_b = head;
		write(1, "pa\n", 3);
	}
}

void	push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*head;

	if (ft_lstsize(*stack_a) > 0)
	{
		head = (*stack_a)->next;
		ft_lstadd_front(stack_b, *stack_a);
		*stack_a = head;
		write(1, "pb\n", 3);
	}
}

void	rotate_a(t_list **stack_a)
{
	t_list	*temp;

	if (ft_lstsize(*stack_a) > 1)
	{
		temp = *stack_a;
		*stack_a = temp->next;
		temp->next = NULL;
		ft_lstadd_back(stack_a, temp);
		write(1, "ra\n", 3);
	}
}

void	swap_a(t_list **stack_a)
{
	t_list	*head;
	t_list	*second;
	t_list	*third;

	if (ft_lstsize(*stack_a) > 1)
	{
		head = *stack_a;
		second = head->next;
		third = second->next;
		second->next = head;
		head->next = third;
		*stack_a = second;
		write(1, "sa\n", 3);
	}
}
