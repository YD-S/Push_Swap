/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 07:25:28 by ysingh            #+#    #+#             */
/*   Updated: 2022/12/11 21:08:09 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	pa(t_stack data)
{
	int	i;

	if (data.size_b > 0)
	{
		i = data.size_a;
		while (i > 0)
		{
			data.stack_a[i] = data.stack_a[i - 1];
			i--;
		}
		data.stack_a[0] = data.stack_b[0];
		i = 0;
		while (i < data.size_b - 1)
		{
			data.stack_b[i] = data.stack_b[i + 1];
			i++;
		}
		data.size_a++;
		data.size_b--;
	}
	data.str = ft_strjoin(data.str, "pa");
	return (data);
}

t_stack	pb(t_stack data)
{
	int	i;

	if (data.size_a > 0)
	{
		i = data.size_b + 1;
		while (--i > 0)
			data.stack_b[i] = data.stack_b[i - 1];
		data.stack_b[0] = data.stack_a[0];
		i = -1;
		while (++i < data.size_a - 1)
			data.stack_a[i] = data.stack_a[i + 1];
		data.size_b++;
		data.size_a--;
	}
	data.str = ft_strjoin(data.str, "pb");
	return (data);
}
