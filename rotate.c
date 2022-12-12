/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 07:24:31 by ysingh            #+#    #+#             */
/*   Updated: 2022/12/12 21:07:10 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	ra(t_stack data, int flag)
{
	int	temp;
	int	i;

	if (data.size_a > 1)
	{
		temp = data.stack_a[0];
		i = 0;
		while (i < data.size_a - 1)
		{
			data.stack_a[i] = data.stack_a[i + 1];
			i++;
		}
		data.stack_a[i] = temp;
	}
	if (flag == 1)
		data.str = ft_strjoin(data.str, "ra");
	return (data);
}

t_stack	rb(t_stack data, int flag)
{
	int	temp;
	int	i;

	if (data.size_b > 1)
	{
		temp = data.stack_b[0];
		i = 0;
		while (i < data.size_b - 1)
		{
			data.stack_b[i] = data.stack_b[i + 1];
			i++;
		}
		data.stack_b[i] = temp;
	}
	if (flag == 1)
		data.str = ft_strjoin(data.str, "rb");
	return (data);
}

t_stack	rr(t_stack data)
{
	data = ra(data, 0);
	data = rb(data, 0);
	data.str = ft_strjoin(data.str, "rr");
	return (data);
}

t_stack	rra(t_stack data)
{
	int	temp;
	int	i;

	if (data.size_a > 1)
	{
		temp = data.stack_a[data.size_a - 1];
		i = data.size_a - 1;
		while (i > 0)
		{
			data.stack_a[i] = data.stack_a[i - 1];
			i--;
		}
		data.stack_a[i] = temp;
	}
	data.str = ft_strjoin(data.str, "rra");
	return (data);
}

t_stack	rrb(t_stack data)
{
	int	temp;
	int	i;

	if (data.size_b > 1)
	{
		temp = data.stack_b[data.size_b - 1];
		i = data.size_b - 1;
		while (i > 0)
		{
			data.stack_b[i] = data.stack_b[i - 1];
			i--;
		}
		data.stack_b[i] = temp;
	}
	data.str = ft_strjoin(data.str, "rrb");
	return (data);
}
