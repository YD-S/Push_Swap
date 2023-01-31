/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 04:38:49 by ysingh            #+#    #+#             */
/*   Updated: 2023/01/31 12:25:20 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/includes/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

/**
 * @brief Struct for stack data.
 * @param *stack_a Pointer to stack A.
 * @param *stack_b Pointer to stack B.
 * @param size_a Size of Stack A.
 * @param size_b Size of Stack B.
 * @param *str String to store operations.
 * @param max Max value in stack A.
 * @param total_size Total size of stacks.
 */
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

/**
 * @brief rotate stack a so that the first element becomes the last one
 * @param *data pointer to struct with stack data.

	* @param flag flag to check if we need to add 
	the command to the str in the struct.
 */
void		ra(t_stack *data, int flag);
/**
 * @brief rotate stack b so that the first element becomes the last one
 * @param *data pointer to struct with stack data.
 * @param flag flag to check if we need to add
	the command to the str in the struct.
 */
void		rb(t_stack *data, int flag);
/**
 * @brief rotate stack a and b so that the first element becomes the last one
 * @param *data pointer to struct with stack data.
 */
void		rr(t_stack *data);
/**
 * @brief reverse rotate stack a so that the last element becomes the first one
 * @param *data pointer to struct with stack data.
 * @param flag flag to check if we need to add
	the command to the str in the struct.
 */
void		rra(t_stack *data, int flag);
/**
 * @brief reverse rotate stack a and b 
 * so that the last element becomes the first one
 * @param *data pointer to struct with stack data.
 */
void		rrr(t_stack *data);
/**
 * @brief reverse rotate stack b so that the last element becomes the first one
 * @param *data pointer to struct with stack data.
 * @param flag flag to check if we need to add
	the command to the str in the struct.
 */
void		rrb(t_stack *data, int flag);
/**
 * @brief swap the first two elements at the top of stack a
 * @param *data pointer to struct with stack data.
 * @param flag flag to check if we need to add
	the command to the str in the struct.
 */
void		sa(t_stack *data, int flag);
/**
 * @brief swap the first two elements at the top of stack b
 * @param *data pointer to struct with stack data.
 * @param flag flag to check if we need to add
	the command to the str in the struct.
 */
void		sb(t_stack *data, int flag);
/**
 * @brief swap the first two elements at the top of stack a and b
 * @param *data pointer to struct with stack data.
 */
void		ss(t_stack *data);
/**
 * @brief push the first element at the top of stack b to stack a
 * @param *data pointer to struct with stack data.
 */
void		pa(t_stack *data);
/**
 * @brief push the first element at the top of stack a to stack b
 * @param *data pointer to struct with stack data.
 */
void		pb(t_stack *data);
/**
	* @brief Normalizes a stack of 
	integers so that the numbers in the stack has its index.
 * @param *data pointer to the struct that holds the stack.
*/
void		ft_normalize(t_stack *data);
/**
 * @brief Prints an error message to the standard output.
*/
void		ft_error(void);
/**
 * @brief Checks if the received string has only numbers.
 * @param *str pointer to the string to be checked.
 * @return 1 if the string has only numbers, 0 if not.
*/
int			ft_isnumber(char *str);
/**
 * @brief initializes the struct that holds the stack.
 * @param argc number of arguments.
 * @param **argv pointer to the array of arguments.
 * @return pointer to the struct.
*/
t_stack		*ft_init(int argc, char **argv);
/**
 * @brief parses the arguments and puts them in the stack if 
	* there is only 1 argument it splits the 
	arguments into the number of arguments..
 * @param *data  pointer to the struct that holds the stack.
 * @param argc  number of arguments.
 * @param **argv  pointer to the array of arguments.
*/
void		parser(t_stack *data, int argc, char **argv);
/**
 * @brief Frees the memory allocated for the struct.
 * @param *data pointer to the struct that holds the stack.
*/
void		ft_free(t_stack *data);
/**
 * @brief Joins the string to the string in the struct.
 * @param *data pointer to the struct that holds the stack.
 * @param *str pointer to the string to be joined.
*/
void		ft_dojoin(t_stack *data, char *str);
/**
 * @brief Checks if malloc is done correctly.
 * @param *var pointer to the number to be checked.
*/
void		ft_check_error(int *var);
/**
 * @brief Copies the stack to the temp stack.
 * @param *data pointer to the struct that holds the stack.
 * @param *temp pointer to the temp stack.
 * @param *temp2 pointer to the temp stack.
*/
void		ft_cpy_stack(t_stack *data, int *temp, int *temp2);
/**
 * @brief Sorts the stack using radix sort.
 * @param *data pointer to the struct that holds the stack.
*/
void		radix(t_stack *data);
/**
 * @brief Sorts the stack if there are only 2 numbers.
 * @param *data - pointer to the struct that holds the stack.
*/
void		sort_two(t_stack *data);
/**
 * @brief Sorts the stack if there are only 3 numbers.
 * @param *data pointer to the struct that holds the stack.
*/
void		sort_three(t_stack *data);
/**
 * @brief Sorts the stack if there are only 4 numbers.
 * @param *data - pointer to the struct that holds the stack.
*/
void		sort_four(t_stack *data);
/**
 * @brief Sorts the stack if there are only 5 numbers.
 * @param *data pointer to the struct that holds the stack.
*/
void		sort_five(t_stack *data);
/**
 * @brief Rotates the stack a and pushes the top number to the stack b.
 * @param *data - pointer to the struct that holds the stack.
*/
void		ft_ra_pb(t_stack *data);
/**
 * @brief Reverses the stack a and pushes the top number to the stack b.
 * @param *data pointer to the struct that holds the stack.
*/
void		ft_rra_pb(t_stack *data);
/**
 * @brief Executes the algorithm to sort the stack.
 * @param *data pointer to the struct that holds the stack.
*/
void		ft_algorithm(t_stack *data);
/**
 * @brief Checks if the stack is sorted.
 * @param *data - pointer to the struct that holds the stack.
 * @return 1 if the stack is sorted, 0 if not.
*/
int			ft_is_sorted(t_stack *data);
#endif