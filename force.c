/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   force.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:09:38 by ysingh            #+#    #+#             */
/*   Updated: 2023/01/27 17:36:21 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	force(t_stack *data)
{
	print_stack(data);
	//ra(data, 0);
	//	print_stack(data);
}

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
