/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 14:29:17 by ysingh            #+#    #+#             */
/*   Updated: 2023/01/26 02:44:15 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parser(t_stack *data, int argc, char **argv)
{
	int	i;
	int	j;

	j = 1;
	if (argc == 1)
	{
		ft_error();
		exit(0);
	}
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		i = 0;
		while (argv[i])
			i++;
		argc = i + 1;
	}
	while (j < argc - 1)
	{
		data->stack_a[j] = ft_atoi(argv[j]);
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
