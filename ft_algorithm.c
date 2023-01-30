/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:59:01 by ysingh            #+#    #+#             */
/*   Updated: 2023/01/30 19:01:40 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_algorithm(t_stack *data)
{
	if (data->size_a == 2)
		sort_two(data);
	else if (data->size_a == 3)
		sort_three(data);
	else if (data->size_a == 4)
		sort_four(data);
	else if (data->size_a == 5)
		sort_five(data);
	else if (data->size_a > 5)
		radix(data);
}

void	ft_rra_pb(t_stack *data)
{
	rra(data, 1);
	pb(data);
}

void radix(t_stack *stacks)
{
	int i;
	uint32_t mask;

	i = 0;
	mask = 0b1;
	while (!ft_is_sorted(stacks))
	{
		while (i < stacks->total_size)
		{
			if (!(stacks->stack_a[0] & mask))
				pb(stacks);
			else
				ra(stacks, 1);
			i++;
		}
		while (stacks->size_b)
			pa(stacks);
		i = 0;
		mask <<= 1;
	}
}
