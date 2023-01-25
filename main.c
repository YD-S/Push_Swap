/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 05:41:24 by ysingh            #+#    #+#             */
/*   Updated: 2023/01/25 22:43:25 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_leak(void)
{
	system("leaks -q push_swap");
}

void	ft_dojoin(t_stack *data, char *str)
{
	char	*temp;

	temp = ft_strjoin(data->str, str);
	free(data->str);
	data->str = temp;
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
			{
				ft_free(data);
				ft_error();
			}
			j++;
		}
		i++;
		j = 0;
	}
}

t_stack	*ft_init(int argc)
{
	t_stack	*data;

	data = (t_stack *)malloc(sizeof(t_stack));
	if (!data)
		exit(0);
	data->stack_a = malloc(sizeof(int) * argc);
	if (!data->stack_a)
		ft_free(data);
	data->stack_b = malloc(sizeof(int) * argc);
	if (!data->stack_b)
		ft_free(data);
	data->str = ft_strdup("");
	data->max = argc - 1;
	data->size_a = argc - 1;
	data->size_b = 0;
	return (data);
}

int	main(int argc, char **argv)
{
	t_stack	*data;

	atexit(ft_leak);
	data = ft_init(argc);
	parser(data, argc, argv);
	ft_repeat_nums(data, argc);
	ft_normalize(data);
	print_stack(data);
	force(data);
	ft_printf("%s\n", data->str);
	ft_free(data);
	return (0);
}
