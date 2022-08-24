/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akasaman <akasaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:28:08 by akasaman          #+#    #+#             */
/*   Updated: 2022/08/24 17:32:32 by akasaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	just_index(&vars, &vars.head_a);
	raaadix_baby(vars);
	ft_lstclear(&vars.head_a, &free_stuffy);
	return (0);
}
	// ft_lstiter(vars.head_a, &print_content);
	// printf("\n");
	// ft_lstiter(vars.head_a, &print_content);