/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42malaga.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 04:38:49 by ysingh            #+#    #+#             */
/*   Updated: 2023/01/30 15:54:27 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/includes/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_stack
{
	int		*stack_a;
	int		*stack_b;
	int		size_a;
	int		size_b;
	char	*str;
	int		max;
	int		total_size;
}			t_stack;

void		ra(t_stack *data, int flag);
void		rb(t_stack *data, int flag);
void		rr(t_stack *data);
void		rra(t_stack *data, int flag);
void		rrr(t_stack *data);
void		rrb(t_stack *data, int flag);
void		sa(t_stack *data, int flag);
void		sb(t_stack *data, int flag);
void		ss(t_stack *data);
void		pa(t_stack *data);
void		pb(t_stack *data);
void		ft_normalize(t_stack *data);
void		ft_error(void);
int			ft_isnumber(char *str);
t_stack		*ft_init(int argc, char **argv);
void		parser(t_stack *data, int argc, char **argv);
void		ft_free(t_stack *data);
void		ft_dojoin(t_stack *data, char *str);
void		ft_check_error(int *var);
void		ft_cpy_stack(t_stack *data, int *temp, int *temp2);
void		radix(t_stack *data);
void		sort_two(t_stack *data);
void		sort_three(t_stack *data);
void		sort_four(t_stack *data);
void		sort_five(t_stack *data);
void		ft_ra_pb(t_stack *data);
void		ft_rra_pb(t_stack *data);
void		ft_algorithm(t_stack *data);
int			ft_is_sorted(t_stack *data);
#endif