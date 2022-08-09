/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   message.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 02:01:08 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/08/09 04:05:51 by ankasamanya      ###   ########.fr       */
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
