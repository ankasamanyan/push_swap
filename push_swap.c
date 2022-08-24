/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:28:08 by akasaman          #+#    #+#             */
/*   Updated: 2022/08/24 15:13:37 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// void print_int_arr(int argc, int *arr);


int	main(int argc, char **argv)
{
	t_vars	vars;

	vars.head_a = NULL;
	vars.head_b = NULL;
	vars.argc = argc - 1;
	check_input(argc, argv);
	put_in_array(argc, argv, &vars);
	just_sort(&vars);
	fill_stack_a(argc, argv, &vars);
	ft_lstiter(vars.head_a, &print_content);
	printf("\n");
	just_index(&vars, &vars.head_a);
	ft_lstiter(vars.head_a, &print_content);
	// ft_lstiter(vars.head_a, &find_max_bits);
	// printf("\n%i", vars.max);
	raaadix_baby(vars);
	// ft_lstclear();
	// free_everything();
	return (0);
}
	// printf("\n");
	// ft_lstiter(vars.head_a, &print_content);
// push_b(&vars.head_a, &vars.head_b);
// rotate_a(&vars.head_a);
// ft_lstiter(vars.head_a, &print_content);
// ft_lstiter(vars.head_b, &print_content);
// printf("%i\n%i\n", INT32_MAX, INT32_MIN);e