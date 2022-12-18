/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 04:38:49 by ysingh            #+#    #+#             */
/*   Updated: 2022/12/18 11:40:56 by ysingh           ###   ########.fr       */
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
}			t_stack;
// for debug //
void		print_stack(t_stack *data);
void		force(t_stack *data);
// for debug //
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
#endif