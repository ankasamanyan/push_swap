/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 17:28:08 by akasaman          #+#    #+#             */
/*   Updated: 2022/07/27 03:23:52 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_input(int argc, char **argv, t_vars *vars)
{
	int	i;
	int	*temp;

	if ( argc < 2)
		exit(0);
	//check if arguments are valid
	i = 1;
	while (argc-- > 1)
	{
		temp = malloc(sizeof(int *));
		*temp = ft_atoi(argv[i++]);
		ft_lstadd_back(&(vars->head_a),ft_lstnew(temp));
	}
	return (0);
}

void print_content(void *content)
{
	printf("%i -> ", *(int *)content);
}

int main(int argc, char **argv)
{
	t_vars	vars;

	vars.head_a = NULL;
	vars.head_b = NULL;
	check_input(argc, argv, &vars);
	push_b(&vars.head_a, &vars.head_b);
	rotate_a(&vars.head_a);
	ft_lstiter(vars.head_a, &print_content);
	printf("\n");
	ft_lstiter(vars.head_b, &print_content);
	return (0);
}
