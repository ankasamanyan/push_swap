/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:28:08 by akasaman          #+#    #+#             */
/*   Updated: 2022/08/21 15:17:34 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_vars	vars;

	vars.head_a = NULL;
	vars.head_b = NULL;
	vars.argc = argc;
	check_input(argc, argv);
	put_in_array(argc, argv, &vars);
	just_sort(&vars);
	fill_stack_a(argc, argv, &vars);
	just_index(&vars, &vars.head_a);
	// raaadix_baby();!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	// free_everything();
	return (0);
}
	// printf("\n");
	// ft_lstiter(vars.head_a, &print_content);
	// ft_lstiter(vars.head_a, &print_content);

	// ft_lstiter(vars.head_a, &find_max_bits);
	// printf("\n");

// push_b(&vars.head_a, &vars.head_b);
// rotate_a(&vars.head_a);
// ft_lstiter(vars.head_a, &print_content);
// ft_lstiter(vars.head_b, &print_content);
// printf("%i\n%i\n", INT32_MAX, INT32_MIN);