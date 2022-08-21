/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:35:52 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/08/21 15:44:58 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	just_sort(t_vars *vars)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < vars->argc - 1)
	{
		j = i + 1;
		while (j < vars->argc - 1)
		{
			if (vars->array[i] > vars->array[j])
			{
				temp = vars->array[i];
				vars->array[i] = vars->array[j];
				vars->array[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	just_index(t_vars *vars, t_list **stack)
{
	int		i;
	t_list	*ptr;

	i = 0;
	ptr = *stack;
	while (ptr)
	{
		i = 0;
		while (i < vars->argc - 1)
		{
			if (*((int *)ptr->content) == vars->array[i])
			{
				break ;
			}
			i++;
		}
		*(int *)(ptr->content) = i;
		ptr = ptr->next;
	}
	free(vars->array);
}

void	put_in_array(int argc, char **argv, t_vars *vars)
{
	int	i;

	i = 0;
	vars->array = malloc(sizeof(int *));
	while (argc-- > 1)
	{
		vars->array[i] = ft_atoi(argv[i + 1]);
		i++;
	}
}

void	fill_stack_a(int argc, char **argv, t_vars *vars)
{
	int	i;
	int	*temp;

	i = 1;
	while (argc-- > 1)
	{
		temp = malloc(sizeof(int));
		*temp = ft_atoi(argv[i++]);
		ft_lstadd_back(&(vars->head_a), ft_lstnew(temp));
	}
}

// void	find_max_bits(void *content)
// {
// 	t_vars	vars;
// 	int		i;

// 	i = 32;
// 	printf("number being tested %i\n", *(int *)content);
// 	while (i-- >= 0 && vars.argc-- > 1)
// 	{
// 		if (*(int *)content & 1 << i)
// 		{
// 			ft_printf("%i\n", i);
// 			break ;
// 		}
// 	}
// }
