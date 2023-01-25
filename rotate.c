/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 07:24:31 by ysingh            #+#    #+#             */
/*   Updated: 2023/01/26 01:26:18 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *data, int flag)
{
	int	temp;
	int	i;

	if (data->size_a > 1)
	{
		temp = data->stack_a[0];
		i = 0;
		while (i < data->size_a - 1)
		{
			data->stack_a[i] = data->stack_a[i + 1];
			i++;
		}
		data->stack_a[i] = temp;
	}
	if (flag == 1)
		ft_dojoin(data, "ra\n");
}

void	rb(t_stack *data, int flag)
{
	int	temp;
	int	i;

	if (data->size_b > 1)
	{
		temp = data->stack_b[0];
		i = 0;
		while (i < data->size_b - 1)
		{
			data->stack_b[i] = data->stack_b[i + 1];
			i++;
		}
		data->stack_b[i] = temp;
	}
	if (flag == 1)
		ft_dojoin(data, "rb\n");
}

void	rr(t_stack *data)
{
	ra(data, 0);
	rb(data, 0);
	ft_dojoin(data, "rr\n");
}

void	rra(t_stack *data, int flag)
{
	int	temp;
	int	i;

	if (data->size_a > 1)
	{
		temp = data->stack_a[data->size_a - 1];
		i = data->size_a - 1;
		while (i > 0)
		{
			data->stack_a[i] = data->stack_a[i - 1];
			i--;
		}
		data->stack_a[i] = temp;
	}
	if (flag == 1)
		ft_dojoin(data, "rra\n");
}

void	rrb(t_stack *data, int flag)
{
	int	temp;
	int	i;

	if (data->size_b > 1)
	{
		temp = data->stack_b[data->size_b - 1];
		i = data->size_b - 1;
		while (i > 0)
		{
			data->stack_b[i] = data->stack_b[i - 1];
			i--;
		}
		data->stack_b[i] = temp;
	}
	if (flag == 1)
		ft_dojoin(data, "rrb\n");
}
