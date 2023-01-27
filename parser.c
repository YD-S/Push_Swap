/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:29:17 by ysingh            #+#    #+#             */
/*   Updated: 2023/01/27 17:46:45 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_do_atoi(t_stack *data, char **argv)
{
	int	j;

	j = 1;
	while (j < data->max + 1)
	{
		data->stack_a[j - 1] = ft_atoi(argv[j]);
		j++;
	}
}

void	parser_str(t_stack *data, char **argv)
{
	int		i;
	char	**tmp;
	int		x;

	x = -1;
	argv = ft_split(argv[1], ' ');
	i = 0;
	while (argv[i])
		i++;
	tmp = ft_calloc(i + 1, sizeof(char *));
	tmp[0] = "push_swap";
	while (++x < i)
		tmp[x + 1] = argv[x];
	free(argv);
	argv = tmp;
	data->max = i;
	ft_do_atoi(data, argv);
	i = 1;
	while (argv[i])
	{
		if (!ft_isnumber(argv[i]))
			ft_error();
		free(argv[i++]);
	}
	free(argv);
}

void	parser(t_stack *data, int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 1)
		ft_error();
	if (argc == 2)
	{
		parser_str(data, argv);
		return ;
	}
	i = 1;
	while (argv[i])
	{
		if (!ft_isnumber(argv[i]))
			ft_error();
		i++;
	}
	j = 1;
	while (j < argc)
	{
		data->stack_a[j - 1] = ft_atoi(argv[j]);
		j++;
	}
}
