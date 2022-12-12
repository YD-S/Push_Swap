/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 05:41:24 by ysingh            #+#    #+#             */
/*   Updated: 2022/12/12 21:07:10 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*data;
	int		i;

	if (argc == 1)
		return (0);
	data = (t_stack *)malloc(sizeof(t_stack));
	data->stack_a = (int *)malloc(sizeof(int) * argc);
	data->stack_b = (int *)malloc(sizeof(int) * argc);
	data->size_a = argc - 1;
	data->size_b = 0;
	i = 0;
	while (i < argc - 1)
	{
		data->stack_a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	i = 0;
	while (i < argc - 1)
	{
		ft_printf("%d ", data->stack_a[i]);
		i++;
	}
	ft_printf("\n");
	return (0);
}
