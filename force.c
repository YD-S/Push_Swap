/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   force.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 20:09:38 by ysingh            #+#    #+#             */
/*   Updated: 2023/01/26 01:29:03 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	force(t_stack *data)
{
	print_stack(data);
	ra(data, 0);
	print_stack(data);
}

void	print_stack(t_stack *data)
{
	int	i;

	i = 0;
	while (i < data->max)
	{
		printf("% 3d | % 3d\n", data->stack_a[i], data->stack_b[i]);
		i++;
	}
	ft_printf("\n");
}
