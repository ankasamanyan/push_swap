/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:28:08 by akasaman          #+#    #+#             */
/*   Updated: 2022/08/29 20:53:51 by ankasamanya      ###   ########.fr       */
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
	smol_stack(argc, &vars);
	raaadix_baby(&vars, &vars.head_a, &vars.head_b);
	ft_lstclear(&vars.head_a, &free_stuffy);
	return (0);
}
