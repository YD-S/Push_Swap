/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 05:41:24 by ysingh            #+#    #+#             */
/*   Updated: 2022/12/18 22:45:47 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	ft_init(t_stack *data, int argc, char **argv)
{
	int	i;

	i = 0;
	data->stack_a = malloc(sizeof(int) * argc);
	data->stack_b = malloc(sizeof(int) * argc);
	data->str = ft_strdup("");
	data->max = argc - 1;
	data->size_a = argc - 1;
	data->size_b = 0;
	while (i < argc - 1)
	{
		data->stack_a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*data;
	int		i;

	i = 0;
	if (argc < 2)
		ft_error();
	if (argc == 2)
	{
		if (ft_strchr(argv[1], ' '))
			argv = ft_split(argv[1], ' ');
		else
			ft_error();
		while (argv[i])
			i++;
		argc = i;
	}
	i = 1;
	while (argv[i])
	{
		if (!ft_isnumber(argv[i]))
			ft_error();
		i++;
	}
	data = (t_stack *)malloc(sizeof(t_stack));
	ft_init(data, argc, argv);
	ft_repeat_nums(data, argc);
	ft_normalize(data);
	force(data);
	ft_printf("%s\n", data->str);
	return (free(data->str), free(data->stack_b), free(data->stack_a),
		free(data), 0);
}
