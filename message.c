/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   message.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ankasamanyan <ankasamanyan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 02:01:08 by ankasamanya       #+#    #+#             */
/*   Updated: 2022/08/30 00:28:35 by ankasamanya      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_message(void)
{
	write(2, "Error\n", 6);
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
