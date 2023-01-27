/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   force.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:09:38 by ysingh            #+#    #+#             */
/*   Updated: 2023/01/27 20:06:44 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *data)
{
	int	i;

	i = 0;
	printf("  A |   B\n");
	while (i < data->max)
	{
		printf("% 3d | % 3d\n", data->stack_a[i], data->stack_b[i]);
		i++;
	}
	ft_printf("\n");
}
