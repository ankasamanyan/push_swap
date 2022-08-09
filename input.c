/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 09:15:35 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/08/08 17:11:02 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_input(int argc, char **argv)
{
	if (argc < 2)
		exit(0);
	check_valid(argc, argv);
	check_overflow(argc, argv);
	check_repeat(argc, argv);
	if (argc == 2)
		exit(0);
	return (0);
}

void	check_overflow(int argc, char **argv)
{
	int	i;

	i = 1;
	while (argc-- > 1)
	{
		if ((argv[i][0] == '-' || argv[i][0] == '+')
			&& ft_strlen(argv[i]) == 11)
		{
			if (ft_strncmp("-2147483648", argv[i],
					ft_strlen("-2147483648")) < 0)
				print_message();
		}
		else if (ft_strlen(argv[i]) == 10)
		{
			if (ft_strncmp("2147483647", argv[i], ft_strlen("2147483647")) < 0)
				print_message();
		}
		else if (ft_strlen(argv[i]) > 11)
			print_message();
		i++;
	}
}

int	sign_handle(char **argv, int i, int j)
{
	int	sign;

	sign = 0;
	if ((argv[i][sign] == '-' || argv[i][sign] == '+') && sign == 0)
	{
		sign++;
		while (argv[i][sign] != '\0')
		{
			if (ft_isdigit((argv[i][sign])) == 0)
				print_message();
			sign++;
		}
		j++;
	}
	else
		print_message();
	return (j);
}

void	check_valid(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argc-- > 1)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit((argv[i][j])) == 0)
				j = sign_handle(argv, i, j);
			j++;
		}
		i++;
	}
}

void	check_repeat(int argc, char **argv)
{
	int	i;
	int	j;
	int	temp;

	i = 1;
	temp = argc;
	while (argc-- > 1)
	{
		j = i + 1;
		while (j < temp)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				print_message();
			j++;
		}
		i++;
	}
}
