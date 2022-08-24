/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raaadix_baby.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akasaman <akasaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:53:47 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/08/24 18:25:21 by akasaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	raaadix_baby(t_vars *vars, t_list **stack_a, t_list **stack_b)
{
	int	max_bit_count;
	t_list	*ptr;
	int	i;
	int	j;

	// i = 0;
	ptr = *stack;
	max_bit_count = find_max_bits(vars);
	// printf("%i\n", max_bit_count);
	while (i < max_bit_count)
	{
		j = 0;
		while (j < vars.argc)
		{
			if ( *((int *)ptr->content))
			{
				/* code */
			}
			j++;
		}
		i++;
	}
}
