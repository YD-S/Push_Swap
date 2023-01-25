/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normalize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:08:03 by ysingh            #+#    #+#             */
/*   Updated: 2023/01/19 21:24:23 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort_bubble(int *temp, t_stack *data)
{
	int	temp_swap;
	int	i;
	int	j;

	j = 0;
	while (j < data->max)
	{
		i = 0;
		while (i < data->max - 1)
		{
			if (temp[i] > temp[i + 1])
			{
				temp_swap = temp[i];
				temp[i] = temp[i + 1];
				temp[i + 1] = temp_swap;
			}
			i++;
		}
		j++;
	}
}

void	ft_normalize(t_stack *data)
{
	int	*temp;
	int	*temp2;

	temp = malloc(sizeof(int) * data->max);
	ft_check_error(temp);
	ft_memcpy(temp, data->stack_a, sizeof(int) * data->max);
	ft_sort_bubble(temp, data);
	temp2 = malloc(sizeof(int) * data->max);
	ft_check_error(temp2);
	ft_cpy_stack(data, temp, temp2);
	free(data->stack_a);
	data->stack_a = temp2;
	free(temp);
}

void	ft_cpy_stack(t_stack *data, int *temp, int *temp2)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->max)
	{
		j = 0;
		while (j < data->max)
		{
			if (temp[i] == data->stack_a[j])
				temp2[j] = i + 1;
			j++;
		}
		i++;
	}
}
