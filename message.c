/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   message.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akasaman <akasaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 02:01:08 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/08/24 15:44:32 by akasaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_message(void)
{
	ft_printf("\033[0;31m");
	write(2, "Error\n", 6);
	ft_printf("\033[0m");
	exit(0);
}

void	print_content(void *content)
{
	printf("%i -> ", *(int *)content);
}

void	free_stuffy(void *content)
{
	free(content);
}
