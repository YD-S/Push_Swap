/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:31:50 by ysingh            #+#    #+#             */
/*   Updated: 2023/01/14 21:05:05 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	ft_putendl_fd("\033[1;31m", 2);
	ft_putendl_fd("+====================================================+", 2);
	ft_putendl_fd("|                     PUSH_SWAP                      |", 2);
	ft_putendl_fd("|                    PARAMS ERROR                    |", 2);
	ft_putendl_fd("+====================================================+\n",
					2);
	ft_putendl_fd("\033[0m", 2);
	exit(0);
}

int	ft_isnumber(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_check_error(int *var)
{
	if (!var)
		exit(0);
}
