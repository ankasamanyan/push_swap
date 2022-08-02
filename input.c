/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 09:15:35 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/08/02 09:54:22 by ankasamanya      ###   ########.fr       */
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

void	find_max(void *content)
{	
	t_vars vars;
	int i = 32;

	// ft_printf("%i\n", vars.argc);
	while (i-- && vars.argc-- > 1)
	{
		if (*(int *)content & 1 << i)
		{
			ft_printf("%i\n", i);
			break;
		}
	}
	// return 0;
}