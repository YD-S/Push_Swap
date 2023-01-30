/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 07:25:28 by ysingh            #+#    #+#             */
/*   Updated: 2023/01/30 19:13:21 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *data)
{
	int	i;

	if (data->size_b > 0)
	{
		i = data->size_a;
		while (i > 0)
		{
			data->stack_a[i] = data->stack_a[i - 1];
			i--;
		}
		data->stack_a[0] = data->stack_b[0];
		i = 0;
		while (i < data->size_b - 1)
		{
			data->stack_b[i] = data->stack_b[i + 1];
			i++;
		}
		data->stack_b[i] = 0;
		data->size_a++;
		data->size_b--;
	}
	ft_dojoin(data, "pa\n");
}

void	pb(t_stack *data)
{
	int	i;

	if (data->size_a > 0)
	{
		i = data->size_b + 1;
		while (--i > 0)
			data->stack_b[i] = data->stack_b[i - 1];
		data->stack_b[0] = data->stack_a[0];
		i = -1;
		while (++i < data->size_a - 1)
			data->stack_a[i] = data->stack_a[i + 1];
		data->stack_a[i] = 0;
		data->size_b++;
		data->size_a--;
	}
	ft_dojoin(data, "pb\n");
}

void	rrr(t_stack *data)
{
	rra(data, 0);
	rrb(data, 0);
	ft_dojoin(data, "rrr");
}
