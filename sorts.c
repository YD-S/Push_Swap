/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:05:27 by ysingh            #+#    #+#             */
/*   Updated: 2023/01/30 15:37:18 by ysingh           ###   ########.fr       */
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

void	sort_four(t_stack *data)
{
	if (data->stack_a[1] == 4)
		ra(data, 1);
	else if (data->stack_a[2] == 4)
	{
		ra(data, 1);
		ra(data, 1);
	}
	else if (data->stack_a[3] == 4)
		rra(data, 1);
	pb(data);
	sort_three(data);
	pa(data);
	ra(data, 1);
}

void	sort_five(t_stack *data)
{
	if (data->stack_a[0] == 5)
		pb(data);
	else if (data->stack_a[1] == 5)
		ft_ra_pb(data);
	else if (data->stack_a[2] == 5)
	{
		ra(data, 1);
		ft_ra_pb(data);
	}
	else if (data->stack_a[3] == 5)
	{
		rra(data, 1);
		ft_rra_pb(data);
	}
	else if (data->stack_a[4] == 5)
		ft_rra_pb(data);
	sort_four(data);
	pa(data);
	ra(data, 1);
}

void	ft_ra_pb(t_stack *data)
{
	ra(data, 1);
	pb(data);
}
