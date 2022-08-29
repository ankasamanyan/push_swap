/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baby_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akasaman <akasaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:53:47 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/08/29 19:54:53 by akasaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	raaadix_baby(t_vars *vars, t_list **stack_a, t_list **stack_b)
{
	t_list	*ptr;
	int		max_bit_count;
	int		i;
	int		j;

	i = 0;
	ptr = *stack_a;
	max_bit_count = find_max_bits(*vars);
	while (i <= max_bit_count)
	{
		j = 0;
		while (j < vars->argc)
		{
			if (*((int *)(*stack_a)->content) & 1 << i)
				rotate_a(stack_a);
			else
				push_b(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			push_a(stack_a, stack_b);
		i++;
	}
}

void	check_sort(int argc, char **argv)
{
	int	i;
	int	j;
	int	temp;
	int	count;

	i = 1;
	count = -1;
	temp = argc;
	j = 0;
	while (i + 1 < argc)
	{
		if (ft_atoi(argv[i]) < ft_atoi(argv[i + 1]))
			count++;
		i++;
	}
	if (count == argc - 3)
		exit(0);
}

void	smol_stack(int argc, t_vars *vars)
{
	if (argc == 3)
	{
		swap_a(&vars->head_a);
		ft_lstiter(vars->head_a, &print_content);
		printf("\n");
		exit(0);
	}
	else if (argc == 4)
	{
		case_3(&vars->head_a);
		ft_lstiter(vars->head_a, &print_content);
		printf("\n");
		exit(0);
	}
	else if (argc == 6)
	{
		case_5(&vars->head_a, &vars->head_b);
		ft_lstiter(vars->head_a, &print_content);
		printf("\n");
		exit(0);
	}
}

void	case_3(t_list **stack_a)
{
	int		first;
	int		second;
	int		third;

	first = *((int *)(*stack_a)->content);
	second = *((int *)(*stack_a)->next->content);
	third = *((int *)ft_lstlast(*stack_a)->content);
	if ((first > second) && (second < third) && (first < third))
		swap_a(stack_a);
	else if ((first < second) && (second > third) && (first > third))
		rev_rotate_a(stack_a);
	else if ((first > second) && (second < third) && (first > third))
		rotate_a(stack_a);
	else if ((first < second) && (second > third) && (first < third))
	{	
		swap_a(stack_a);
		rotate_a(stack_a);
	}
	else if ((first > second) && (second > third) && (first > third))
	{
		swap_a(stack_a);
		rev_rotate_a(stack_a);
	}
}

void	case_5(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	content;

	i = 0;
	while (i < 2)
	{
		content = *((int *)(*stack_a)->content);
		if (content == 0 || content == 1)
		{
			push_b(stack_a, stack_b);
			i++;
		}
		else
			rotate_a(stack_a);
	}
	case_3(stack_a);
	push_a(stack_a, stack_b);
	push_a(stack_a, stack_b);
	if (*((int *)(*stack_a)->content) == 1)
		swap_a(stack_a);
}
