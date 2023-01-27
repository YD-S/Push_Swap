/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:05:27 by ysingh            #+#    #+#             */
/*   Updated: 2023/01/27 22:00:16 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack *data)
{
	if (data->stack_a[0] > data->stack_a[1])
		sa(data, 1);
}

void	sort_three(t_stack *data)
{
	if (data->stack_a[0] == 1 && data->stack_a[1] == 3 && data->stack_a[2] == 2)
	{
		rra(data, 1);
		sa(data, 1);
	}
	if (data->stack_a[0] == 2)
	{
		if (data->stack_a[1] == 1)
			sa(data, 1);
		else
			rra(data, 1);
	}
	if (data->stack_a[0] == 3)
	{
		if (data->stack_a[1] == 1 || data->stack_a[1] == 2)
			ra(data, 1);
		if (data->stack_a[1] == 1)
			sa(data, 1);
	}
}

// void	radix(t_stack *data)
// {
// }
