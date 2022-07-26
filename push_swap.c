/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:28:08 by akasaman          #+#    #+#             */
/*   Updated: 2022/07/26 16:00:38 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(void)
{
	// t_list	**stack_a;
	t_list	*stack_a;
	t_list	*temp;
	// t_list	*stack_b;
	t_list	*n1, *n2, *n3;

	// push_a(&stack_a, &stack_b)
	//fill 'em up;
	n1 = ft_lstnew((int *)18);
	n2 = ft_lstnew((int *)7);
	n3 = ft_lstnew((int *)73);
	
	//link 'em up;
	stack_a = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;

	
	temp = stack_a;
	//print 'em out;
	while (temp != NULL)
	{
		printf("%i -> ", *(int *)temp->content);
		temp = temp->next;
	}
	
	return (0);
}