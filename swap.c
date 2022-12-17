/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 07:23:37 by ysingh            #+#    #+#             */
/*   Updated: 2022/12/16 21:12:27 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *data, int flag)
{
	int	temp;

	if (data->size_a > 1)
	{
		temp = data->stack_a[0];
		data->stack_a[0] = data->stack_a[1];
		data->stack_a[1] = temp;
	}
	if (flag == 1)
		data->str = ft_strjoin(data->str, "sa\n");
}

void	sb(t_stack *data, int flag)
{
	int	temp;

	if (data->size_b > 1)
	{
		temp = data->stack_b[0];
		data->stack_b[0] = data->stack_b[1];
		data->stack_b[1] = temp;
	}
	if (flag == 1)
		data->str = ft_strjoin(data->str, "sb\n");
}

void	ss(t_stack *data)
{
	sa(data, 0);
	sb(data, 0);
	data->str = ft_strjoin(data->str, "ss\n");
}
