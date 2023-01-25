/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:29:17 by ysingh            #+#    #+#             */
/*   Updated: 2023/01/25 22:47:56 by cigarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void parser_str(t_stack *data, char **argv)
{
	int i = 0;
	int j = 0;
	argv = ft_split(argv[1], ' ');
	i = 0;
	while (argv[i])
		i++;
	char	**tmp = ft_calloc(i + 1, sizeof(char *));
	tmp[0] = "push_swap";
	for (int x=0; x < i; x++)
		tmp[x + 1] = argv[x];
	free(argv);
	argv = tmp;
	data->max = i;
	j = 1;
	while (j < data->max)
	{
		data->stack_a[j - 1] = ft_atoi(argv[j]);
		j++;
	}
	i = 1;
	while (argv[i])
	{
		if (!ft_isnumber(argv[i]))
			ft_error();
		free(argv[i]);
		i++;
	}
	free(argv);
}

void	parser(t_stack *data, int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 1)
	{
		ft_error();
		exit(0);
	}
	if (argc == 2)
	{
		parser_str(data, argv);
		return ;
	}
	j = 1;
	while (j < argc)
	{
		data->stack_a[j - 1] = ft_atoi(argv[j]);
		j++;
	}
	i = 1;
	while (argv[i])
	{
		if (!ft_isnumber(argv[i]))
			ft_error();
		i++;
	}
}
