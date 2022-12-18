/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 05:41:24 by ysingh            #+#    #+#             */
/*   Updated: 2022/12/18 20:51:26 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_leaks(void)
{
	system("leaks -q push_swap");
}

static void	ft_repeat_nums(t_stack *data, int argc)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (j < argc - 1)
		{
			if (data->stack_a[i] == data->stack_a[j] && i != j)
				ft_error();
			j++;
		}
		i++;
		j = 0;
	}
}

void	ft_init(t_stack *data, int argc)
{
	data->stack_a = malloc(sizeof(int) * argc);
	data->stack_b = malloc(sizeof(int) * argc);
	data->str = ft_strdup("");
	data->max = argc - 1;
	data->size_a = argc - 1;
	data->size_b = 0;
}

int	main(int argc, char **argv)
{
	t_stack	*data;
	int		i;

	atexit(ft_leaks);
	if (argc < 3)
		ft_error();
	data = (t_stack *)malloc(sizeof(t_stack));
	ft_init(data, argc);
	i = 0;
	while (i < argc - 1)
	{
		data->stack_a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	ft_repeat_nums(data, argc);
	ft_normalize(data);
	force(data);
	ft_printf("%s\n", data->str);
	return (free(data->str), free(data->stack_b), free(data->stack_a),
		free(data), 0);
}
