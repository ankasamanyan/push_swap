/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akasaman <akasaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 09:15:35 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/08/04 18:36:47 by akasaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_input(int argc, char **argv, t_vars *vars)
{

	if ( argc < 2)
		exit(0);
	//check if arguments are valid
	//check if_isdigit
	//check for int overflow?
	if (ft_isdigit(argv))
	{
		// fill_stack_a(argc, argv, vars);
		put_in_array(argc, argv, vars);
		print_2d_array();
	}
	
	return (0);
}

void	fill_stack_a(int argc, char **argv, t_vars *vars)
{
	int	i;
	int	*temp;

	i = 1;
	while (argc-- > 1)
	{
		temp = malloc(sizeof(int *));
		*temp = ft_atoi(argv[i++]);
		ft_lstadd_back(&(vars->head_a),ft_lstnew(temp));
	}
}

void	print_content(void *content)
{
	printf("%i -> ", *(int *)content);
}

//put argv[][] in array,
void	put_in_array(int argc, char **argv, t_vars *vars)
{
	int	i;
	
	i = 0;
	while (argc-- > 1)
	{
		vars->array = ft_calloc(argc, sizeof(char *));
		vars->array[i++] = argv[i];
	}
}


void	print_2d_array(char	**arr, int fd)
{
	int	i;

	i = 0;
	if (arr)
	{
		while (arr[i] != NULL)
		{
			ft_putstr_fd(arr[i], fd);
			if (arr[i][ft_strlen(arr[i]) - 1] != '\n')
				ft_putchar_fd('\n', fd);
			i++;
		}
	}
}
//sort them
//index them

void	find_max_bits(void *content)
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