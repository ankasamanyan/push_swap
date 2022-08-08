/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:28:08 by akasaman          #+#    #+#             */
/*   Updated: 2022/08/08 15:41:40 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_vars	vars;

	vars.head_a = NULL;
	vars.head_b = NULL;
	vars.argc = argc;
	check_input(argc, argv, &vars);
	put_in_array(argc, argv, &vars);
	//just_sort();
	//just_index();
	fill_stack_a(argc, argv, &vars);
	//raaadix_baby();
	
	// ft_lstiter(vars.head_a, &find_max);
	// printf("\n");
	// push_b(&vars.head_a, &vars.head_b);
	// rotate_a(&vars.head_a);
	// ft_lstiter(vars.head_a, &print_content);
	// printf("\n");
	// ft_lstiter(vars.head_b, &print_content);
	// printf("%i\n%i\n", INT32_MAX, INT32_MIN);
	return (0);
}
